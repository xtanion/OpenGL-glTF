#ifndef MODEL_H
#define MODEL_H

#include "Mesh.h"
#include "../include/json/json.h"

using json = nlohmann::json;

class Model{

    public:
        Model(const char* file);
        void Draw(Shader& shader, Camera& camera);

    private:
        const char* file;
        std::vector<unsigned char > data;
        json JSON;

        std::vector<unsigned char>getData();
};
#endif //MODEL_H
