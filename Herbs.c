c'''
#include <stdio.h>

void thyme()
{
    printf("\nالزعتر: يساعد على الهضم وتقوية المناعة.\n");
}

void ginger()
{
    printf("\nالزنجبيل: يساعد على تنشيط الجسم وتحسين الدورة الدموية.\n");
}

void blackSeed()
{
    printf("\nالحبة السوداء: من الأعشاب المفيدة لدعم الصحة العامة.\n");
}

void chamomile()
{
    printf("\nالبابونج: يساعد على الاسترخاء والراحة.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n=== دليل الأعشاب المفيدة ===\n");
        printf("1- الزعتر\n");
        printf("2- الزنجبيل\n");
        printf("3- الحبة السوداء\n");
        printf("4- البابونج\n");
        printf("5- عرض الجميع\n");
        printf("0- خروج\n");

        printf("\nاختر رقم: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                thyme();
                break;

            case 2:
                ginger();
                break;

            case 3:
                blackSeed();
                break;

            case 4:
                chamomile();
                break;

            case 5:
                thyme();
                ginger();
                blackSeed();
                chamomile();
                break;

            case 0:
                printf("\nشكراً لاستخدامكم البرنامج.\n");
                break;

            default:
                printf("\nاختيار غير صحيح.\n");
        }

        if(choice >= 1 && choice <= 5)
        {
            printf("\nنسأل الله لكم الصحة والعافية.\n");
        }

    } while(choice != 0);

    return 0;
}
