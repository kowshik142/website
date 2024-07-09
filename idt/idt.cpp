#include <emscripten.h>
#include <string>
#include <cstring>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    const char* processMessage(const char* name, const char* email, const char* message) {
        std::string response = "Thank you, ";
        response += name;
        response += "!\n";
        response += "We have received your message: '";
        response += message;
        response += "'.\n";
        response += "We will respond to you at ";
        response += email;
        response += " shortly.";

        char* res = new char[response.size() + 1];
        strcpy(res, response.c_str());
        return res;
    }
}
