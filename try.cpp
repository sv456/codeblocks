#include<iostream>
using namespace std;
static int cnt=0;
class node
{
public:
    int regno;
    char name[20];
    node *frnt,*bck;
};
class school
{
    node *first,*last;
public:
    school()
    {
        first=NULL;
        last=NULL;
    }
    ~school()
    {
        delete first;
        delete last;
    }
    void add_node()
    {
        node *record=new node;
        cout<<"enter reg no and and name"<<endl;
        cin>>record->regno>>record->name;
        record->frnt=NULL;
        record->bck=NULL;
        if(first==NULL)
        {
         first=last=record;
        }

        else
        {
            last->frnt=record;
            record->bck=last;
            last=record;
        }

    }
    void display()
    {
        node *tmp;
        tmp=first;
        char ch;
        while(tmp!=NULL)
        {
            cout<<"enter ur choice f for forward and b for backward\n";
            cin>>ch;
            if(ch=='f'||ch=='F')
            {
                cout<<tmp->regno<<"\t"<<tmp->name<<endl;
                tmp=tmp->frnt;
            }
            else if(ch=='b'||ch=='B')
            {
                cout<<tmp->regno<<"\t"<<tmp->name<<endl;
                tmp=tmp->bck;
            }
            else
                break;
        }
    }
    void add_first()
    {
        node *rec=new node;
        cout<<"this node will be added at first\nenter values for this one \n";
        cin>>rec->regno>>rec->name;
        rec->bck=NULL;
        rec->frnt=first;
        first->bck=rec;
        first=rec;

    }
    void add_anywhere()
    {
        node *tmp=first;
        int n;
        cout<<"place in which node needs to be added\n";
        cin>>n;
        node *rec=new node;
        cout<<"enter the details for this node\n";
        cin>>rec->regno>>rec->name;
        if(n==1)
        {
            add_first();
            return;
        }
        else if(n==(cnt+1))
        {
            last->frnt=rec;
            rec->bck=last;
            rec->frnt=NULL;
            last=rec;
        }
        else{
        for(int i=1;i<=n-2;i++)
        {
            tmp=tmp->frnt;
        }

        rec->frnt=tmp->frnt;
        tmp->frnt->bck=rec;
        tmp->frnt=rec;
        rec->bck=tmp;
        }
    }
    void delete_anynode()
    {
        int j;
        node *tmp;
        tmp=first;
        cout<<"for deletion enter the value\n";
        cin>>j;
        while(tmp!=NULL)
        {
            if(tmp->frnt->regno==j)
            {
                node *t;
                t=tmp->frnt;
                tmp->frnt=t->frnt;
                t->frnt->bck=tmp;
                delete t;
                return;
            }
        }
    }
    void cnt_node()
    {
        node *t=first;
        while(t!=NULL)
        {
            t=t->frnt;
            cnt++;
        }
        cout<<"total no of nodes-"<<cnt<<endl;
    }

};
main()
{
    school s;
    int i,m;
    cout<<"enter the length of linked list\n";
    cin>>m;
    for(i=0;i<m;i++)
        s.add_node();
    s.display();
    s.add_first();
    s.display();
    s.cnt_node();
    s.add_anywhere();
    s.display();
    s.delete_anynode();
    s.display();

}
