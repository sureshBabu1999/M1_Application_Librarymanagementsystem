
/**
 * @brief structure for storing data
 * 
 */
struct library
{
char bk_name[30];
char author[30];
int pages;
float price;
};
/**
 * @brief displays the menu options
 * 
 */
while(j!=6)
{
printf("\n\n1. Add book information\n2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the count of books in the library\n");
printf("6. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{

/**
 * @brief keeps add the inputs
 * 
 */
for (i=0; i<keepcount; i++)

/**
 * @brief if the input matchs to the logic it takes input as the author name
 * 
 */
if (strcmp(ar_nm, l[i].author) == 0)

/**
 * @brief if the input matchs to the logic it takes input as book name
 * 
 */
if (strcmp(bk_nm, l[i].bk_name) == 0)
