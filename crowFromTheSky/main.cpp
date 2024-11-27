#include<crow.h>

int main(){
    crow::SimpleApp app;
    CROW_ROUTE(app,"/")([](){
        auto index=crow::mustache::load_text("index,html");
        return index;
    });
    app.port(8080).run();
}