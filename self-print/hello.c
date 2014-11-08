#include<stdio.h>
char *s = "\";\n\
int main() {\n\
    printf(\"#include<stdio.h>\\nchar *s = \\\"\");\n\
    char *p = s;\n\
    while (*p != 0)\n\
        if (*p == '\\\\' || *p == '\"')\n\
            printf(\"\\\\%c\", *p++);\n\
        else if (*p == '\\n')\n\
            printf(\"\\\\n\\\\%c\", *p++);\n\
        else\n\
            printf(\"%c\", *p++);\n\
    printf(\"%s\", s);\n\
    /* Here we can put any code */\n\
}\n\
";
int main() {
    printf("#include<stdio.h>\nchar *s = \"");
    char *p = s;
    while (*p != 0)
        if (*p == '\\' || *p == '"')
            printf("\\%c", *p++);
        else if (*p == '\n')
            printf("\\n\\%c", *p++);
        else
            printf("%c", *p++);
    printf("%s", s);
    /* Here we can put any code */
}
