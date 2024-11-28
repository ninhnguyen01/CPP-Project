# include <stdio.h>
# include <stdlib.h>

int main() {

    printf("Hello World");
    printf("Hello\nWorld");
    printf("%d\n",500);
    printf("My favorite number is %d\n",500);
    printf("My favorite %s is %d\n","number",500);
    printf("My favorite %s is %f\n","number",500.98);

    int favnum = 90;
    printf("My favorite %s is %d\n","number",favnum);

    char mychar = 'i';
    printf("My favorite %c is %d\n",mychar,favnum);

    printf("%f\n",8.9);
    printf("%f\n",5.0+4.5);
    printf("%f\n",5+4.5);
    printf("%d\n",5/4);
    printf("%f\n",5/4.0);

    int num = 6;
    printf("%d\n",num);

    return 0;
}