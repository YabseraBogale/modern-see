#include<crow.h>
#include<string>
int main(){
    crow::SimpleApp app;
    CROW_ROUTE(app,"/").methods(crow::HTTPMethod::POST,crow::HTTPMethod::GET)([](crow::request& req){
        if(req.method==crow::HTTPMethod::Post){
            std::string username=req.url_params.get("username");
            std::string password=req.url_params.get("password");
            int number=stoi(password);
            std::cout<<number<<" "<<username<<" "<<password<<std::endl;
        } else{
            auto index=crow::mustache::load_text("index.html");
            return index;
        }
    });

    app.port(8080).run();
}
