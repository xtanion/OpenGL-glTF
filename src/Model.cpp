#include "../headers/Model.h"
using namespace std;

Model::Model(const char* file)
{

    string text = get_file_content(file);
    JSON = json ::parse(text);

    Model::file = file;
    data = getData();
}

vector<unsigned char >Model::getData()
{
    string bytes;
    string uri = JSON["buffers"][0]["uri"];

    // The mesh need vertices, indices & textures
    // Also we need normals for fragment shader

    string fileStr = string (file);
    string fileDirectory = fileStr.substr(0, fileStr.find_last_of('/') + 1);
    bytes = get_file_content((fileDirectory + uri).c_str());

    // Transform the raw text data into bytes and put them in a vector
    vector<unsigned char> data(bytes.begin(), bytes.end());
    cout<< data.size() << endl;
    return data;
}