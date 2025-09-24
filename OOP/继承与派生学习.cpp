class A :public B
{

};

class C :private D
{

};

class E :protected F
{

};


构造函数

派生类名：：派生类名（参数表）：基类名（参数表），基类名（参数表）……

复制构造函数

derived::derived(const derived& v)
{

}

析构函数
