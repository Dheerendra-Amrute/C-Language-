#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>

struct patient{
    int id;
    char patientName[50];
    char patientAddress[50];
    char contact[15];
    char disease[50];
    char date[12];
    char time[20];
}p;

struct doctor{
    int id;
    char name[50];
    char address[50];
    char contact[15];
    char specialize[50];
    char date[12];
    char time[10];
}d;

void admitPatient();
void patientList();
void dischargePatient();
void addDoctor();
void doctorList();


int main(){
    int n;
    FILE *ptr;
    ptr = fopen("patient_list.csv","r");
    if (ptr==NULL){
        ptr = fopen("patient_list.csv","a");
        fprintf(ptr,"Patient ID, Patient Name, Patient Address, Contact, Diesease, Date, Time\n");
        printf("file 'patient_list.csv' is created successfully......\n");
    }
    fclose(ptr);

    FILE *ptr1;
    ptr1 = fopen("doctor_list.csv","r");
    if (ptr1==NULL){
        ptr1 = fopen("doctor_list.csv","a");
        fprintf(ptr1,"Doctor ID, Doctor Name, Doctor Address, Contact, Specialization, Date, Time\n");
        printf("file 'doctor_list.csv' is created successfully......\n");
    } 
    fclose(ptr1);

    FILE *ptr2;
    ptr2 = fopen("discharge_patient_list.csv","r");
    if (ptr2==NULL){
        ptr2 = fopen("discharge_patient_list.csv","a");
        fprintf(ptr2,"Patient ID, Patient Name, Patient Address, Contact, Diesease, Date, Time\n");
        printf("file 'discharge_patient_list.csv' is created successfully......\n");
    } 
    fclose(ptr2);

    while(1){

        printf("***** Hospital Management System *****\n\n");
        printf("1. Admit Patient\n");
        printf("2. Patient List\n");
        printf("3. Discharge Patient\n");
        printf("4. Add Doctor\n");
        printf("5. Doctors List\n");
        printf("0. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch(n){
        case 0:
            exit(0);

        case 1:
            admitPatient();
            break;

        case 2:
            patientList();
            break;

        case 3:
            dischargePatient();
            break;

        case 4:
            addDoctor();
            break;

        case 5:
            doctorList();
            break;

        default:
            printf("Invalid Choice...\n\n");

        }
        printf("\n\nPress Any Key To Continue...");
        fflush(stdin);
        getchar();
    }
    

    return 0;
}

void admitPatient(){
    printf("***** Admit patient *****\n\n");
    FILE *ptr;
    ptr = fopen("patient_list.csv","a");
    printf("enter the patient id : \n");
    scanf("%d",&p.id);
    fflush(stdin);

    printf("enter the patient name : \n");
    gets(p.patientName);
    fflush(stdin);

    printf("enter the patient address : \n");
    gets(p.patientAddress);
    fflush(stdin);

    printf("enter the patient contact details : \n");
    gets(p.contact);
    fflush(stdin);

    printf("enter the patient disease : \n");
    gets(p.disease);
    fflush(stdin);

    char date[]={__DATE__};
    strcpy(p.date,date);
    fflush(stdin);

    char Time[]={__TIME__};
    strcpy(p.time,Time);
    fflush(stdin);

    fprintf(ptr,"%d,%s,%s,%s,%s,%s,%s\n",p.id,p.patientName,p.patientAddress,p.contact,p.disease,p.date,p.time);

    fclose(ptr);
}

void addDoctor(){
    printf("***** Add Doctor *****\n\n");
    FILE *ptr;
    ptr = fopen("doctor_list.csv","a");
    printf("enter the doctor id : \n");
    scanf("%d",&d.id);
    fflush(stdin);

    printf("enter the doctor name : \n");
    gets(d.name);
    fflush(stdin);

    printf("enter the doctor address : \n");
    gets(d.address);
    fflush(stdin);

    printf("enter the doctor contact details : \n");
    gets(d.contact);
    fflush(stdin);

    printf("enter the doctor specialization : \n");
    gets(d.specialize);
    fflush(stdin);

    char date[]={__DATE__};
    strcpy(d.date,date);
    fflush(stdin);

    char T[]={__TIME__};
    strcpy(p.time,T);
    fflush(stdin);

    fprintf(ptr,"%d,%s,%s,%s,%s,%s,%s\n",d.id,d.name,d.address,d.contact,d.specialize,d.date,d.time);

    fclose(ptr);
}

void patientList(){

    printf("***** Patient List *****\n\n");
    printf("----------------------------------------------------------------------------------------------------------\n");
    char c;
    FILE *ptr;
    ptr = fopen("patient_list.csv","r");
    c= fgetc(ptr);
    while (c!=EOF){
        printf("%c",c);
        c= fgetc(ptr);
    }

    fclose(ptr);
}

void doctorList(){
    printf("***** Doctor List *****\n\n");
    printf("----------------------------------------------------------------------------------------------------------\n");
    char c;
    FILE *ptr;
    ptr = fopen("doctor_list.csv","r");
    c= fgetc(ptr);
    while (c!=EOF){
        printf("%c",c);
        c= fgetc(ptr);
    }
    fclose(ptr);
}

void dischargePatient(){

printf("***** Discharge patient *****\n\n");
printf("----------------------------------------------------------------------------------------------------------\n");   
int patientId, currentPatientId;
    char line[256];
    FILE *ptr1, *ptr2, *ptr3;

    ptr1 = fopen("patient_list.csv", "r");
    if (ptr1 == NULL) {
        printf("Error opening patient_list.csv file.\n");
        exit(1);
    }

    ptr3 = fopen("discharge_patient_list.csv", "a");
    if (ptr3 == NULL) {
        printf("Error opening discharge_patient_list.csv file.\n");
        exit(1);
    }

    printf("Enter Patient ID to discharge: \n");
    scanf("%d", &patientId);

    ptr2 = fopen("temp.csv", "w");
    if (ptr2 == NULL) {
        printf("Error creating temporary file.\n");
        exit(1);
    }

    int found = 0;
    while (fgets(line, sizeof(line), ptr1)) {
        sscanf(line, "%d,", &currentPatientId);

        if (currentPatientId == patientId) {
            found = 1;
            fprintf(ptr3, "%s", line);
        } 
        else {
            fprintf(ptr2, "%s", line);
        }
    }

    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);

    if (found) {
        remove("patient_list.csv");
        rename("temp.csv", "patient_list.csv");
        printf("Patient with ID %d discharged successfully.\n", patientId);
    } else {
        remove("temp.csv");
        printf("Patient with ID %d not found.\n", patientId);
    }
}