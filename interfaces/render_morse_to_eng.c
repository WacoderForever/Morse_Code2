struct CTextStack *render_morse_to_eng(char *result){
    struct CTextStack *s=newCTextStack(CTEXT_LINE_BREAKER,CTEXT_SEPARATOR);
     CTextStack_$open(s,CTEXT_HTML,"lang=\"en\"");
        ctext_open(s,CTEXT_HEAD);
            create_basic_entryss(s);
            CTextStack_segment_text(s,"Morse to English");
        ctext_close(s,CTEXT_HEAD);

        ctext_open(s,CTEXT_BODY);
            create_link(s,"English to morse","/eng_to_morse");
            CTextStack_auto$close(s,CTEXT_BR,"");
            CTextStack_$open(s,CTEXT_DIV,R"(class="center")");
                ctext_open(s,CTEXT_H2);
                    CTextStack_segment_text(s,"Morse to English Converter");
                ctext_close(s,CTEXT_H2);
            CTextStack_$open(s,CTEXT_FORM,R"(action="/morse_to_eng" method="POST")");
             CTextStack_$open(s,CTEXT_INPUT,R"(name="morse_text" placeholder="Enter morse text")");
                CTextStack_auto$close(s,CTEXT_BR,"");
                    create_button(s,"Convert");
                ctext_close(s,CTEXT_FORM);
                if(result != NULL){
                ctext_open(s,CTEXT_H3);
                        CTextStack_segment_text(s,result);
                    ctext_close(s,CTEXT_H3);
                }
                
            ctext_close(s,CTEXT_DIV);
        ctext_close(s,CTEXT_BODY);
    ctext_close(s,CTEXT_HTML);
}