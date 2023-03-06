#include <stdio.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
void printMyBook(struct Books book,int num){
    printf("BOOK-%d Title:%s\n",num,book.title);
    printf("BOOK-%d Author:%s\n",num,book.author);
    printf("BOOK-%d Subject:%s\n",num,book.subject);
    printf("BOOK-%d ID:%d\n\n\n",book.book_id);
}

int main( ) {

   struct Books allBooks[5];

   for(int i=0;i<5;i++){
    printf("Enter Book %d Title:",i+1);
    scanf("%s",&allBooks[i].title);

    printf("Enter Book %d Author:",i+1);
    scanf("%s",&allBooks[i].author);

    printf("Enter Book %d Subject:",i+1);
    scanf("%s",&allBooks[i].subject);

    printf("Enter Book %d Book ID:",i+1);
    scanf("%d",&allBooks[i].book_id);
   }
   for(int i=0;i<5;i++){
    printMyBook(allBooks[i],i+1);
   }



   return 0;
}

// A A A 1 B B B 2 C C C 3 D D D 4 E E E 5
