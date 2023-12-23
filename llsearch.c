void search()
{
int e,t;
temp=head;
printf("enter the element to search");
scanf("%d",&e);
while(temp!=0)
{
if(temp->data==e)
{
t=1;
break;
}
temp=temp->next;
}
if(t==1)
{
printf("Element %d is in the list",e);
}
else
{
printf("not present");
}
}