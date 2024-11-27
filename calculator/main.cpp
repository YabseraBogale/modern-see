#include "crow.h"
#include "crow/mustache.h"

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/").methods(crow::HTTPMethod::GET, crow::HTTPMethod::POST)([](const crow::request& req) {
        if (req.method == crow::HTTPMethod::POST) {
            const std::string body = req.body;
            

            // Parse the POST body as URL-encoded form data
            auto parse=req.get_body_params();
            // Extract form fields
            std::string username = parse.get("username") ? parse.get("username") : "No username";
            std::string password = parse.get("password") ? parse.get("password") : "No password";
            
            return "username: " + username + " password: " + password;
        } 

        // Handle GET requests: Return the HTML file
        auto index = crow::mustache::load_text("index.html");
        return index;
    });

    app.port(8080).run();
}
