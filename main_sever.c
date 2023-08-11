#include "dependencies/CWebStudio.h"

#include "interfaces/render_eng_to_morse.c"
#include "interfaces/render_morse_to_eng.c"
#include "interfaces/general.c"

#include "routes/eng_to_morse_route.c"
#include "routes/eng_to_morse_convert_route.c"
#include "routes/morse_to_eng_route.c"
#include "routes/morse_to_eng_convert_route.c"

struct CwebHttpResponse *main_sever(struct CwebHttpRequest *request){
    request->read_content(request,2000);
    char *route = request->route;

    if(!(strcmp(route,"/eng_to_morse"))){
        return eng_to_morse_route(request);
    }    
    else if(!(strcmp(route,"/eng_to_morse_convert"))){
        return eng_to_morse_convert_route(request);
    }
    else if(!(strcmp(route,"/morse_to_eng"))){
        return morse_to_eng(request);
    }
    else if(!(strcmp(route,"/morse_to_eng_convert"))){
        return morse_to_eng_convert_route(request);
    }
    else{
        return eng_to_morse_route(request);
    }

}
