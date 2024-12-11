#include<string.h>
#include<stdio.h>
int main(){
    int n;
    printf("Please type the number of field you wanna create");
    scanf("%d",&n);
    struct DITStudents
    {
        /* data */
        char name[20];
        char roll_no[20];
        char branch[20];
        long sap_id;
    }DITStudents1[n];

    // initialisation 1st student
    // DITStudents1[0].branch="CSE";59
    // DITStudents1[0].name="Pushkar";
    // DITStudents1[0].roll_no="2A781670";
    // DITStudents1[0].sap_id=200071067;\

    // // correct way to initialise
    // //strcpy("CSE",DITStudents1[0]);
    // strcpy(DITStudents1[0].name,"Lakshay");
    // strcpy(DITStudents1[0].roll_no,"AB7674");
    // strcpy(DITStudents1[0].branch,"CSE");
    // DITStudents1[0].sap_id=200071067;
    
    // // intialisation 2nd student
    // strcpy(DITStudents1[1].name,"Samaksh");
    // strcpy(DITStudents1[1].roll_no,"AB7647");
    // strcpy(DITStudents1[1].branch,"Mechainical");
    // DITStudents1[1].sap_id=20007178;

    // int size=sizeof(DITStudents1)/sizeof(DITStudents1[0]);

    // intialising 
    for (int i=0;i<n;i++){
        printf("# Student %d Details",i+1);
        printf("\n Name :");
        scanf("%s",DITStudents1[i].name);
        printf(" Roll Number :");
        scanf("%s",DITStudents1[i].roll_no);
        printf(" Branch :");
        scanf("%s",DITStudents1[i].branch);
        printf(" Sap ID :");
        scanf("%ls",DITStudents1[i].sap_id);
    }


    for (int i=0;i<n;i++){
        printf("Students Details %d \n Name : %s \n Branch : %s \n Roll num : %s \n Sap id : %ls",i+1,DITStudents1[i].name,DITStudents1[i].branch,DITStudents1[i].roll_no,DITStudents1[i].sap_id);
        printf("\n \n");
    }
    return 0;
}