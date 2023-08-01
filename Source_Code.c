#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void dispquot();

static int i = 0;
static int qid = 1;
static int foruser=0;
static int forlike=0;

typedef struct signup
{
    char user_id[25];
    char first_name[20];
    char last_name[20];
    char email[20];
    char password[10];
    int mobile[10];
} signup;

typedef struct quotes
{
    int id;
    char text[300];
    char author[50];
    char user_id[20]; 
    int likestat;
    int favstat;
}quotes;

/* void signupp(signup *s){
    printf("enter user id:");
    scanf("%s",&s->user_id);
    printf("enter first name:");
    scanf("%s",&s->first_name);
    printf("enter last name:");
    scanf("%s",&s->last_name);
    printf("enter email:");
    scanf("%s",&s->email);
    printf("enter password:");
    scanf("%s",&s->password);
    printf("enter mobile:");
    scanf("%s",&s->mobile);
}
*/

int main()
{
    struct signup s1;
    struct signup arr[100];
    struct quotes qarr[100];
    int choice;
    char userid[25];
    char password[10];
    int liked[100]={};

    do
    {

        printf("User menu (Before authentication)");
        printf("\n0.Exit\n1.Sign In\n2.Sign Up\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit;
            break;

        case 1:
        
            printf("Sign In\n");
            printf("Enter username:");
            scanf("%s", userid);
            printf("Enter password:");
            scanf("%s", password);
            int c=0;
            for (int x = 0; x < i; x++)
            {
                
                if (strcmp(userid, arr[x].user_id) == 0 && strcmp(password, arr[x].password) == 0)
            {
                    c = 1;
                    foruser=x;
            }
            }
                if (c == 1)
                {
                    printf("\nSuccessful Login\n");


                    /// edit start
                    int z=0;
                    do{
                    printf("Enter the options \n0.exit \n1.display \n2.My Quotes \n4.liked-Unliked \n5.add \n6.Edit Quote \n7.Delete\n8.Change Password\n9.Edit Profile\n");
                    scanf("%d",&z);
                     
                     switch(z)
                     {
                     case 0:
                     printf("You choose to sign out\n");
                         break;

                         case 1:
                         printf("All Quotes\n");
                         for(int k=0;k<qid;k++)
                         {
                             if(qarr[k].id!=0)
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         else
                         {
                             continue;
                         }
                         
                         };

                         break;

                             case 2:
                             
                         printf("All Quotes\n");
                         for(int k=0;k<qid;k++)
                         {
                             if(  (qarr[k].id!=0) &&  (strcmp(qarr[k].user_id,arr[foruser].user_id)==0) )
                             printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
        
                         else
                         {
                             continue;
                         }
                         };

                         break;

                        //  case 4:

                        //    printf("Available Quotes\n");
                        //  for(int k=0;k<qid;k++)
                        //  {
                        //      if(qarr[k].id!=0)
                        //   printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                        //  else
                        //  {
                        //      continue;
                        //  }
                         
                        //  };
                        //  int lllll;
                        // printf("Enter the quote id you want to like\n");
                        // scanf("%d",&lllll);
                        // liked[forlike++]=0;
                        // int lr=0;

                        // printf("Your Liked Quotes");
                        // for(lr=0;lr<=forlike;lr++)
                        // {
                        //     if(liked[lr]!=0)
                        //     {
                        //         printf("%d %s %s %s \n",qarr[liked[lr]].id,qarr[liked[lr]].text,qarr[liked[lr]].author,qarr[liked[lr]].user_id);
                        //     }            
                        // }
                        
                        // printf("Your Unliked Quotes");
                        // for(lr=0;lr<=forlike;lr++)
                        // {
                        //     if(liked[lr]==0)
                        //     {
                        //         printf("%d %s %s %s \n",qarr[liked[lr]].id,qarr[liked[lr]].text,qarr[liked[lr]].author,qarr[liked[lr]].user_id);
                        //         }

                            
                        // }



                        //  break;

                        //////case 3 start

                          case 3:
                         printf("Available Quotes\n");
                         for(int k=0;k<qid;k++)
                         {
                             if(qarr[k].id!=0)
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         else
                         {
                             continue;
                         }
                         
                          };
                         int favop;
                         printf("Enter Id of quote you want to add to favourite\n");
                         scanf("%d",&favop);
                          qarr[favop].favstat=1;
                         printf("Your Favourite quotes are\n");

                         for(int k=0;k<qid;k++)
                         {
                             if(qarr[k].id!=0 && (qarr[k].favstat!=0))
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         else
                         {
                             continue;
                         }
                         }

                                 printf("Your Favourite quotes are\n");

                         for(int k=0;k<qid;k++)
                         {
                             if(qarr[k].id!=0 && (qarr[k].favstat==0))
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         else
                         {
                             continue;
                         }
                         }


                         break;




                        //////case 3 end

                         case 4:
                         printf("Available Quotes\n");
                         for(int k=0;k<qid;k++)
                         {
                             if(qarr[k].id!=0)
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         else
                         {
                             continue;
                         }
                         
                          };
                         int likop;
                         printf("Enter Id of quote to like");
                         scanf("%d",&likop);
                          qarr[likop].likestat=1;
                         printf("Your liked quotes are\n");

                         for(int k=0;k<qid;k++)
                         {
                             if(qarr[k].id!=0 && (qarr[k].likestat!=0))
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         else
                         {
                             continue;
                         }
                         }

                                 printf("Your Unliked quotes are\n");

                         for(int k=0;k<qid;k++)
                         {
                             if(qarr[k].id!=0 && (qarr[k].likestat==0))
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         else
                         {
                             continue;
                         }
                         }


                         break;


                    case 5:
                         printf("New Quote\n Enter the text,author\n");
                         qarr[qid].id=qid;
                         strcpy(qarr[qid].user_id,arr[foruser].user_id);
    
                         scanf("%s %s",qarr[qid].text,qarr[qid].author);
                         printf("%d %s %s %s \n",qarr[qid].id,qarr[qid].text,qarr[qid].author,qarr[qid].user_id);
                         
                         qid++;
                         break;

                    case 6:
                    printf("All Quotes are as follows \n");
                         for(int k=0;k<qid;k++)
                         {
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         };
                         printf("Enter the id of quote you want to edit\n");
                         int idedit=0;
                         scanf("%d",&idedit);
                         if(idedit>0 && idedit<=qid)
                         {
                             char editt[300];
                             printf("Enter the string you want to edit");
                             scanf("%s",&editt);
                             strcpy(qarr[idedit].text,editt);
                         }
                         else
                         {
                             printf("Please Enter valid Index to be edited \n");
                         }





                    break;

                    case 7:
                   
                      printf("All Quotes are as follows \n");
                         for(int k=0;k<qid;k++)
                         {
                          printf("%d %s %s %s \n",qarr[k].id,qarr[k].text,qarr[k].author,qarr[k].user_id);
                         };
                         printf("Enter the id you want to delete \n");
                          int iddel;
                         scanf("%d",&iddel);
                         if(iddel>0 && iddel<=qid)
                         {
                             qarr[iddel].id=0;
                         }
                         else
                         {
                             printf("Please Enter valid Index \n");
                         }
                         break;

                         case 8:
                         printf("Please enter the new password");
                         char newp1[20];
                         scanf("%s",newp1);
                         printf("Please Re-enter the new password");
                         char newp2[20];
                         scanf("%s",newp2);
                         if(strcmp(newp1,newp2)==0)
                         {
                         strcpy(arr[foruser].password,newp1);
                         printf("Password Changed");
                         }
                         else
                         {
                             printf("Password Resetting failed :\n re-enterred password not matching");
                         }
                         

                         

                         break;

                         case 9:
                         printf("you choose to edit the profile\n");
                         int dddd;
                         printf("you can only edit first name,last name, mobile no,dddd\n enter sequentilly\n");
                        scanf("%s,%s,%s,%d",arr[foruser].first_name,arr[foruser].last_name,arr[foruser].mobile,dddd);
                        printf("Edited first name,last name, mobile no are\n");
                        printf("%s,%s,%s,%d\n",arr[foruser].first_name,arr[foruser].last_name,arr[foruser].mobile,dddd );

                        
                        




                         break;
                        

                     
                     default:
                     printf("Please Enter Valid Input\n");
                         break;
                     }
                    }while(z!=0);

                    ///edit end



                }

                else
                    printf("\nIncorrect Login Details\nPlease enter the correct credentials\n");
            

            break;

        case 2:
            printf("Sign Up\n");
            printf("enter user id:");
            scanf("%s", arr[i].user_id);
            printf("enter first name:");
            scanf("%s", arr[i].first_name);
            printf("enter last name:");
            scanf("%s", arr[i].last_name);
            printf("enter email:");
            scanf("%s", arr[i].email);
            printf("enter password:");
            scanf("%s", arr[i].password);
            printf("enter mobile:");
            scanf("%s", arr[i].mobile);

            i = ++i;
            printf("i=%d\n", i);
            printf("Account Created Sucessfully please sign in \n");


            break;
        }
    } while (choice != 0);

    return 0;
}