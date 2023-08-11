struct CwebHttpResponse *morse_to_eng(struct CwebHttpRequest *request){
    struct CTextStack *stack=render_morse_to_eng(NULL);
    return cweb_send_rendered_CTextStack_cleaning_memory(stack,200);
}