#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[100],pass[100];
int roll;


void reg()
{
    system("cls");
    FILE *fp;
    fp=fopen("Reg data.txt","a");
    if(fp==NULL)
        printf("Failed to open ");
    char dept[100];
    fflush(stdin);
    int i,level,term;
    printf("Enter the following options: \n");
    printf("Enter Name:");
    gets(name);
    fflush(stdin);
    fprintf(fp,"*Name:%s\t",name);
    printf("\nEnter ID:");
    scanf("%d",&roll);
    fflush(stdin);
    fprintf(fp,"*ID:%d\t",roll);
    printf("\nEnter Department:");
    gets(dept);
    fflush(stdin);
    fprintf(fp,"*Dept:%s\t",dept);
    printf("\nEnter Level:");
    scanf("%d",&level);
    fflush(stdin);
    fprintf(fp,"*Level:%d\t",level);
    printf("\nEnter Term:");
    scanf("%d",&term);
    fflush(stdin);
    fprintf(fp,"*Term:%d\t\n",term);
    printf("\nEnter Password:");
    gets(pass);
    fflush(stdin);
    fclose(fp);

    printf("You have successfully resistered.\n");
    system("pause");
    system("cls");
    main();


}
void login()
{
    system("cls");
    char passc[100];
    int rollc;
    printf("\nEnter ID:");
    scanf("%d",&rollc);
    fflush(stdin);
    printf("\nEnter Password:");
    gets(passc);
    fflush(stdin);
    if(rollc==roll && strcmp(passc,pass)==0)
    {
        library();
    }
    else
    {
        printf("You have entered wrong password.\nPlease try again.\n");
        system("pause");
        system("cls");
        login();

    }
}
void library()
{

    int choice, batch,bid,id,date,mm,yr,date1,mm1,yr1,due,fine, bid2,i,issuetk=0;

    system("cls");
    printf("\n\n");
    printf("\t\t\t\t\tWelcome to BAUST library management system\n");
    printf("\t\t\t\t<<<<<<<<------Please choose a option------>>>>>>>>>>\n");
    printf("=======================================================================================================================\n");
    printf("\t\t\t 1. BOOK LIST\n");
    printf("\t\t\t 2.ISSUE A BOOK\n");
    printf("\t\t\t 3.RETURN A BOOK\n");
    printf("\t\t\t 4.Exit.\n");

    printf("Enter your choice:\t");
    scanf("%d",&choice);
    printf("\n");
    if (choice==1)
    {
        int choice;
        system("cls");
        printf("<<<<<<<<------Please choose a option------>>>>>>>>>>");
        printf("\n");
        printf("1.Engineering\n");
        printf("2.Humanities & Social Sciences\n");
        printf("3.Management\n");
        printf("4.Science\n");
        printf("\n");
        printf("Enter your choice:\t");
        scanf("%d",&choice);
        printf("\n");
        if (choice==1)
        {
            system("COLOR 6");
            system("cls");
            printf("\n");
            printf("1.Building Science - concepts and applications\n2.Architectural Design and Regulation\n3.Planning in Divided Cities\n4.The Basics of Troubleshooting in Plastics Processing: An Introductory Practical Guide\n5.Heat Transfer Applications for the Practicing Engineer\n6.Convert! Designing Web Sites to Increase Traffic \n");
            printf("7.Graph Partitioning\n8.Java For Dummies(R), 5th Edition\n9.Model-based Visual Tracking: the OpenTL Framework\n10.Professional JavaScript for Web Developers 3rd Edition\n11.Qualitative Spatial and Temporal Reasoning\n12.Static Analysis of Software: The Abstract Interpretation\n13.The Art of Software Testing, Third Edition\n");
            printf("14.Data Mining: Concepts, Models, Methods, and Algorithms, Second Edition\n15.Compiler Construction Using Java,JavaCC,and Yacc\n16.Global Software and IT: A Guide to Distributed Development,Projects,and Outsourcing\n17.Cloud Computing Principles and Paradigms\n18.Oracle Database Performance and Scalability\n");
            printf("19.Adobe Acrobat X PDF BibleDesign of Multithreaded Software: The Entity-Life Modeling Approach\n20.Distibuted Systems: Design and Algorithms\n21.Energy Security - An Interdiscinplinary Approach\n22.Models and Analysis for Distribute system\n23.objective-C\n24.Presentation Secrets\n25.SolidWorks 2011 Parts Bible\n");
            printf("26.Information Security:Principles and Practice,Second Edition\n27.Competitive Intelligence and Decision Problems\n28.Cyberwar and Information Warfare\n29.An Introduction to Fire Dynamics 3e\n30.Computer System Design: System-on-Chip\n31.Advanced Concrete TechnologySelf Compacting Concrete\n");
            printf("32.Fundamental Of Electric Circuit\n33.Thermal Engineering\n34.Apex English\n35.Differential Calculus\n36.The C programming language\n37.Information and Recommender Systems\n");
            printf("38.Modern operating system\n39.discrete mathematics\n40.concrete mathematics\n41.Clean Code\n42.Organic chemistry\n43.introductory chemistry\n44Battery Systems Engineering\n45.Multimodal Transport Systems\n");
            printf("46.Ivor Horton's Beginning Visual C++ 2012\n47.Fundamentals of Software Testing\n48.Electricity Production from Renewables Energies\n49.Mechanical Engineering Education\n50.Programming 24-Hour Trainer, Second Edition\n51.Machine Learning in Python:for Predictive Analysis\n");
            printf("\nTry another search?(y/n)");
            if(_getch()=='y')
                main();
            else
                exit(0);


        }
        else if (choice==2)
        {
            system("COLOR 9");
            system("cls");
            printf("1.\tGardening - Philosophy for Everyone - Cultivating Wisdom\n2.\tHow To Know\n3.\tJust the Arguments - 100 of the Most Important Arguments in Western Philosophy\n4.\tKant and Motherhood and Philosophy\n5.\tOnce-Told Tales - An Essay In Literary Aesthetics\n6.\tPutting Information First - Luciano Floridi andthe Philosophy of Information\n7.\tQuantum Non-Locality and Relativity 3e\n8.\tRancière, Education and the Taming of Democracy\n9.\tReading R. S. Peters Today - Analysis, Ethics, and the Aims of Education\n10.\tThe Admissible Contents of Experience\n11.\tThe Formation of Reason\n12.\tThe Good Life of Teaching - An Ethics of Professional Practice\n13.\tWittgenstein\n14.\tYoga - Philosophy for Everyone: Bending Mind and Bodu\n15.\tA Companion to Hegel\n16.\tHandbook of Stress\n17.\tIAAP Handbook of Applied\n18.\tQualitative Research Methods in Mental Health and Psychotherapy - A Guide for Students and Practitioners\n19.\tChildren's Testimony - A Handbook of Psychological Research and Forensic Practice 2e\n20.\tHandbook of Child and Adolescent Drug and Substance Abuse: Pharmacological, Developmental\n21.\tHandbook of Forensic Assessment: Psychological and Psychiatric Perspectives\n22.\tInternational Handbook of Suicide Prevention - Research, Policy and Practice\n23.\tMindfulness-integrated CBT - Principles and Practice\n24.\tPersonal Construct Methodology\n25.\tPost-Traumatic Syndromes in Childhood and Adolescence - A Handbook of Research and Practice\n26.\tThe Clinician's Handbook for Obsessive Compulsive Disorder - Inference-Based Therapy\n27.\tThe Wiley-Blackwell Handbook of Group Psychotherapy\n28.\tCritical Neuroscience: A Handbook of the Socialand Cultural Contexts of Neuroscience\n29.\tJohn Bowlby - From Psychoanalysis to Ethology - Unravelling the Roots of Attachment Theory\n30.\tThe Handbook of Alzheimer's Disease and Other Dementias\n31.\tLinguistic Nativism and the Poverty of the Stimulus\n");
            printf("\nTry another search?(y/n)");
            if(_getch()=='y')
                main();
            else
                exit(0);


        }


        else if (choice==3)
        {

            system("cls");
            system("COLOR 3");
            printf("1.\tManaging the Professional Practice\n2.\t Architectural Design and Regulation\n3.\tPlanning in Divided Cities\n4.\tThe Basics of Troubleshooting in Plastics Processing: An Introductory Practical Guide\n5.\tHeat Transfer Applications for the Practicing Engineer\n6.\tConvert! Designing Web Sites to Increase Traffic and Conversion\n7.\tGraph Partitioning\n8.\tJava For Dummies(R), 5th Edition\n9.\tModel-based Visual Tracking: the OpenTL Framework\n10.\tProfessional JavaScript for Web Developers 3rd Edition\n11.\tQualitative Spatial and Temporal Reasoning\n12.\tStatic Analysis of Software: The Abstract Interpretation\n13.\tThe Art of Software Testing, Third Edition\n15.\tCompiler Construction Using Java, JavaCC, and Yacc\n16. \tCloud Computing Principles and Paradigms\n17.\tOracle Database Performance and Scalability: a quantitative approach\n18.\tAdobe Acrobat X PDF Bible\n19.\tDesign of Multithreaded Software: The Entity-Life Modeling Approach\n20.\tDistibuted Systems: Design and Algorithms\n21.\tEnergy Security - An Interdiscinplinary Approach\n22.\tInteroperability for Enterprise Software and Applications\n24. \tObjective-C\n25.\tPresentation Secrets\n26.\tSolidWorks 2011 Parts Bible\n27.\tSystems and Software A with Applications\n28.\tThe Dark Side of Software A: Evil on Computing Projects\n29.\tComputer System Design: System-on-Chip\n30.\tDrupal  Bible\n\n");
            printf("\nTry another search?(y/n)");
            if(_getch()=='y')
                main();
            else
                exit(0);
        }

        else if (choice==4)
        {
            system("cls");
            printf("1.\tForensic Chemistry Handbook\n2.\tChemical Analysis of Antibiotic Residues in Food\n3.\tGene Discovery for Disease Models\n4.\tHigh-Density Lipoproteins: Structure, Metabolism, Function, and Therapeutics\n5.\tPlant Metabolism and Biotechnology\n6.\tGreen Chemistry for Environmental Remediation\n7.\tExcel for Chemists: A Comprehensive Guide, Third Edition (with CD-ROM)\n8.\tWriting Chemistry Patents and Intellectual Property: A Practical Guide\n9.\tThe Chemical Element - Chemistry's Contribution to Our Global Future\n10.\tDie Chemie des Lebens\n11.\tEnergy for a Sustainable World - From the Oil Ageto a Sun-Powered Future\n12.\tEuropean Women in Chemistry\n13.\tLetters to a Young Chemist\n14.\tHeterocycles in Life and Society - An Introduction to Heterocyclic Chemistry, Biochemistry  Applications\n15.\tCatalytic Methods in Asymmetric Synthesis: Advanced Materials, Techniques, and Applications\n16.\tChemosensors: Principles, Strategies, and Applications\n17.\tMicrogel Suspensions - Fundamentals and Applications\n18.\tModern Heterocyclic Chemistry\n19.\tMolecular Switches 2e\n20.\tName Reactions in Heterocyclic Chemistry II\n21.\tOrganic Reaction Mechanisms 2007\n22.\tOrganic Reaction Mechanisms 2009\n23.\tOrgano Main Group Chemistry\n24\tOrganoselenium Chemistry - Synthesis and Reactions\n25.\tComplex Macromolecular Architectures: Synthesis\n26.\tDendrimers - Towards Catalytic, Material and Biomedical Uses\n27.\tAutomation for Robotics29\n28.\tHomogeneous Catalysts - Activity - Stability - Deactivation\n29.\tIntroduction to Operational Modal Analysis\n30.\tMacrocycles - Construction, Chemistry and Nanotechnology Applications\n");


            printf("\nTry another search?(y/n)");
            if(_getch()=='y')
                main();
            else
                exit(0);

        }

    }

    else if (choice==2)
    {
        FILE *fp2;
        fp2=fopen("Issue data.txt","a");
        if(fp2==NULL)
            printf("Failed to open ");
        else
        {

            fprintf(fp2,"ID:%d\t",roll);
            for(i=0; i<3; i++)
            {
                system("cls");
                printf("Enter the book Id:");
                scanf("%d",&bid);

                printf("Enter Your Id:");
                scanf("%d",&id);

                fprintf(fp2,"Book No:%d\t",i+1);
                fprintf(fp2,"Book ID:%d\t",bid);
                printf("Enter ISSU date:(yr-mm-date)");
                scanf("%d%d%d",&yr,&mm,&date);
                fprintf(fp2,"Issue Date:%d-%d-%d\t",yr,mm,date);
                issuetk=issuetk+10;
                printf("\n");

                printf("You have ISSU a book %d\n.your id is %d.\nyour ISSU date is %d-%d-%d\n",bid,id,yr,mm,date);
                printf("You have ISSU %d book .your have to pay :%d tk",i+1,issuetk);
                fprintf(fp2,"Issue Payment:10 tk\t\n\t");

                printf("\nIssue another book?(y/n)\n\n");
                if(_getch()=='y')
                    system("pause");
                else
                {
                    system("cls");
                    library();

                }

            }
            fprintf(fp2,"Final Issue Payment:%d\t\n",issuetk);
            fprintf(fp2,"\n");

            printf("You have already issued 3 books \nGo to main page or return book .\n\n\n ");

            system("pause");
            library();

        }
        fclose(fp2);
    }
    else if (choice==3)
    {
        FILE *fp3;
        fp3=fopen("return data.txt","a");
        if(fp3==NULL)
            printf("Failed to open ");
        fprintf(fp3,"ID:%d\t",roll);
        {
            system("cls");
            printf("Enter your BOOK Id:");
            scanf("%d",&bid2);
            fprintf(fp3," book ID:%d\t",bid2);
            printf("Enter Your Id:");
            scanf("%d",&id);
            printf("Enter ISSU date:(yr-mm-date)\n");
            scanf("%d%d%d",&yr,&mm,&date);
            fprintf(fp3,"Issue Date:%d-%d-%d\t",yr,mm,date);
            printf("Enter Return date:(yr-mm-date)\n");
            scanf("%d%d%d",&yr1,&mm1,&date1);
            fprintf(fp3,"Return date:%d-%d-%d\t",yr1,mm1,date1);
            if(mm==mm1)
            {
                due=date-date1;
                if(due<0)
                {
                    due=due*-1;
                    if(due>15)
                    {
                        due=due-15;
                    }
                    else
                        due=0;


                }
                else
                    due=due;



            }
            else
                due=(30-date)+date1;

            fine=due*5;
            if(fine==0)
            {
                printf("You do not have any fine");
            }
            else
                printf("You have delayed %d days and you have to pay %d tk fine",due,fine);
            fprintf(fp3,"delayed days:%d\tfine tk:%d\t\n",due,fine);
            fclose(fp3);

            printf("\nTry another search?(y/n)");
            if(_getch()=='y')
                main();
            else
                exit(0);

        }
    }
    else if(choice==4)
    {
        exit(0);
    }

}
int main()
{
    int opt;
    printf("WELCOME TO BAUST LIBRARY MANAGEMENT SYSTEM\n");
    printf("Quotes:- If you are new here then register first then log in / just log in .\n ");
    printf("1.Register.\n 2.Login.\n");
    printf("Enter your choice :");
    scanf("%d",&opt);
    if(opt==1)
    {
        reg();
    }
    else if(opt==2)
    {
        login();
    }

}
