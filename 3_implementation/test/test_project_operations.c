

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

  /* Add book */
case 1:  

printf ("Enter book name = ");
scanf ("%s",l[i].bk_name);

printf ("Enter author name = ");
scanf ("%s",l[i].author);

printf ("Enter pages = ");
scanf ("%d",&l[i].pages);

printf ("Enter price = ");
scanf ("%f",&l[i].price);
keepcount++;

break;
/**
* @brief enables to enter the book information
*
*/
case 2:
printf("you have entered the following information\n");
for(i=0; i<keepcount; i++)
{
printf ("book name = %s",l[i].bk_name);

printf ("\t author name = %s",l[i].author);

printf ("\t  pages = %d",l[i].pages);

printf ("\t  price = %f",l[i].price);
}
break;
/**
*
*@brief enables to enter the author name
*/
case 3:
printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)
printf ("%s %s %d %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;
/**
*@brief enables to enter the book name
*
*/
case 4:
printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(bk_nm, l[i].bk_name) == 0)
printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;
/**
*@brief it displays the number of books in library
*
*/
case 5:
printf("\n No of books in library : %d", keepcount);
break;
case 6:
exit (0); 

}
}
return 0;

}
