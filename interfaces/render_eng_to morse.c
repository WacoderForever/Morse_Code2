struct CTextStack *render_eng_to_morse(char *result){
    struct CTextStack *s=newCTextStack(CTEXT_LINE_BREAKER,CTEXT_SEPARATOR);
    s->$open(s,CTEXT_HTML,"lang=\"en\"");
        s->open(s,CTEXT_HEAD);
           create_basic_enntrys(s);
            s->segment_text(s,"English to Morse");
        s->close(s,CTEXT_HEAD);

        s->open(s,CTEXT_BODY);
            create_link(s,"Morse to English","morse_to_eng");
            s->auto$close(s,CTEXT_BR,"");
            
            s->$open(s,CTEXT_DIV,R"(class="center")");
            s->open(s,CTEXT_H2);
                s->segment_text(s,"English to Morse Converter");
             s->close(s,CTEXT_H2);

            s->$open(s,CTEXT_FORM,R"(action="/eng_to_morse" method="POST")")
                s->auto$close(s,CTEXT_INPUT,R"(name="eng_text" placeholder="Enter English text")");
                s->auto$close(s,CTEXT_BR,"");
                create_button(s,"Convert");
            s->close(s,CTEXT_FORM);
        if(result !=NULL){
            s->open(s,CTEXT_H3);
                s->segment_text(s,result);
            S->close(s,CTEXT_H3);
        }
        s->close(s,CTEXT_BODY);
    s->close(s,CTEXT_HTML);
        
}