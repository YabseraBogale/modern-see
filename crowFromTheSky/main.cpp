#include<crow.h>

int main(){
    crow::SimpleApp app;
    CROW_ROUTE(app,"/")([](){
        return "Hell Yeah";
    });
    app.port(8080).run();
}