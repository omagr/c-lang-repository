#include <stdio.h>

struct item_info
{
    char item_name[100];
    int item_quantity,item_id;
    float item_price;
};

void main() {
    int itemCount;
    char name[100];

    printf("\ninvoice to:");
    scanf("%s", name);
    printf("\nitem counts:");
    scanf("%d", &itemCount);

    printf("\ninvoice to:%s",name);
    printf("\nitem counts:%d",itemCount);

    struct item_info item_array[itemCount];
    for (int i = 0; i < itemCount; i++)
    {
        item_array[i].item_id = i;
        printf("\nname of item no.%d:",i+1);
        // fgets(item_array[i].item_name, 200, stdin);
        scanf("%s", item_array[i].item_name);
        printf("\nprice of item no.%d:",i+1);
        scanf("%f",&item_array[i].item_price);
        printf("\nquantity of item no.%d:",i+1);
        scanf("%d",&item_array[i].item_quantity);
    }
        for (int i = 0; i < itemCount; i++)
    {
        puts(item_array[i].item_name);
        printf("\nprice of item.%f",item_array[i].item_price);
        printf("\nquantity of item.%d",item_array[i].item_quantity);
        printf("\nid of item.%d",item_array[i].item_id);
    }
    
    

}
