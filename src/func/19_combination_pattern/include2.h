#include "19_combination_pattern/ConcreteCompany.h"
#include "19_combination_pattern/HRDepartment.h"




void include_main(){
    Company *root = new ConcreteComponany("北京总公司");
    root->Add(new HRDepartment("总公司人力资源部"));
    root->Add(new FinanceDepartment("总公司财务部"));

    ConcreteComponany *comp1 = new ConcreteComponany("上海华东分公司");
    comp1->Add(new HRDepartment("华东分公司人力资源部"));
    comp1->Add(new FinanceDepartment("华东分公司财务部"));
    root->Add(comp1);

    ConcreteComponany *comp2 = new ConcreteComponany("南京办事处");
    comp2->Add(new HRDepartment("南京办事处人力资源部"));
    comp2->Add(new FinanceDepartment("南京办事处财务部"));
    root->Add(comp2);

    ConcreteComponany *comp3 = new ConcreteComponany("杭州办事处");
    comp3->Add(new HRDepartment("杭州办事处人力资源部"));
    comp3->Add(new FinanceDepartment("杭州办事处财务部"));
    root->Add(comp3);

    cout << "结构图：" << endl;
    root->Display(1);

    cout << "职责：" << endl;
    root->LineOfDuty();
}