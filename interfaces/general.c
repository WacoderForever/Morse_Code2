void create_button(struct CTextStack *s,const char *name){
    CTextStack_$open(s,CTEXT_BUTTON,R"(name="operator" value="%s")",name);
    CTextStack_segment_text(s,name);
    ctext_close(s,CTEXT_BUTTON);
}

void create_link(struct CTextStack *s,const char *name, const char *link){
    CTextStack_$open(s,CTEXT_A,R"(href="%s")",link);
        CTextStack_$open(s,CTEXT_BUTTON,R"(class="link_button")");
            CTextStack_segment_text(s,name);
        ctext_close(s,CTEXT_BUTTON);
    ctext_close(s,CTEXT_A);
}

void create_basic_enntrys(struct CTextStack *s){
    char *fav_icon_link = smart_static_ref("favicon.png");
        CTextStack_auto$close(s,CTEXT_LINK,"rel=\"shortcut icon\" href=\"%s\"",fav_icon_link);
    free(fav_icon_link);

    char *style_link = smart_static_ref("style.css");
        CTextStack_auto$close(s,CTEXT_LINK,"rel=\"stylesheet\" href=\"%s\"",style_link);
    free(style_link);
}
void create_sq_button(struct CTextStack *s,const char *name,const char *lname){
    CTextStack_$open(s,CTEXT_BUTTON,R"(name="operator" value="%s")",lname);
    CTextStack_segment_text(s,name);
    ctext_close(s,CTEXT_BUTTON);
}
