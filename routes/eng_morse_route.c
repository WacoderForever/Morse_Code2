struct CwebHttpResponse *eng_to_morse_route(struct CwebHttpRequest *request){
        struct CTextStack *stack=render_eng_to_morse(NULL);
        return cweb_send_rendered_CTextStack_cleaning_memory(stack,200);
}