struct CTextStack *render_morse_to_eng(char *result){
    struct CTextStack *s=newCTextStack(CTEXT_LINE_BREAKER,CTEXT_SEPARATOR);
    s->$open(s,CTEXT_HTML,"lang=\"en\"");
        s->open(s,CTEXT_HEAD);
            create_basic_entryss(s);
            s->segment_text(s,"Morse to English");
        s->close(s,CTEXT_HEAD);

        s->open(s,CTEXT_BODY);
            create_link(s,"English to morse","/eng_to_morse");
            s->auto$close(s,CTEXT_BR,"");
            s->$open(s,CTEXT_DIV,R"(class="center")");
                s->open(s,CTEXT_H2);
                    s->segment_text(s,"Morse to English Converter");
                s->close(s,CTEXT_H2);
                s->$open(s,CTEXT_INPUT,R"(name="morse_text" placeholder="Enter morse text")");
                s->auto$close(s,CTEXT_BR,"");
                create_button(s,"Convert");

                if(result != NULL){
                    s->$open(s,CTEXT_H3);
                        s->segment_text(s,result);
                    s->close(s,CTEXT_H3);
                }
            s->close(s,CTEXT_DIV);
        s->close(s,CTEXT_BODY);
    s->close(s,CTEXT_HTML);
}