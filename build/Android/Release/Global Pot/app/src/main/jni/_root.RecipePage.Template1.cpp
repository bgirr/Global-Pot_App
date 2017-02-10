// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsImage_Url_Property.h>
#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Left_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <_root.MainView.h>
#include <_root.RecipePage.h>
#include <_root.RecipePage.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.StringConcatOperator.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[13];
static uType* TYPES[3];

namespace g{

// public partial sealed class RecipePage.Template1 :94
// {
// static Template1() :115
static void RecipePage__Template1__cctor__fn(uType* __type)
{
    RecipePage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    RecipePage__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Right"*/]);
    RecipePage__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Left"*/]);
    RecipePage__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Url"*/]);
    RecipePage__Template1::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"__gen10"*/]);
    RecipePage__Template1::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"__gen13"*/]);
}

static void RecipePage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Right");
    ::STRINGS[2] = uString::Const("Left");
    ::STRINGS[3] = uString::Const("Url");
    ::STRINGS[4] = uString::Const("__gen10");
    ::STRINGS[5] = uString::Const("__gen13");
    ::STRINGS[6] = uString::Const("totalAmount");
    ::STRINGS[7] = uString::Const("selectedMeasuringUnit.nameDe");
    ::STRINGS[8] = uString::Const("ingredient.iconUrl");
    ::STRINGS[9] = uString::Const("ingredient.nameDe");
    ::STRINGS[10] = uString::Const("auto");
    ::STRINGS[11] = uString::Const(" ");
    ::STRINGS[12] = uString::Const("https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, __gen10_Value_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, __gen11_Left_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, __gen11_Right_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, __gen12_Right_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, __gen13_Url_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, __gen14_Right_inst1), 0,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template1, __parent1), uFieldFlagsWeak,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector5_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* RecipePage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 17;
    options.ObjectSize = sizeof(RecipePage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("RecipePage.Template1", options);
    type->fp_build_ = RecipePage__Template1_build;
    type->fp_cctor_ = RecipePage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RecipePage__Template1__New1_fn;
    return type;
}

// public Template1(RecipePage parent, RecipePage parentInstance) :98
void RecipePage__Template1__ctor_1_fn(RecipePage__Template1* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :118
void RecipePage__Template1__New1_fn(RecipePage__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Grid* self = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* __gen101 = ::g::Fuse::Controls::Text::New3();
    __this->__gen10_Value_inst1 = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(__gen101, RecipePage__Template1::__selector0());
    ::g::Uno::UX::StringConcatOperator* __gen111 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen11_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen111, RecipePage__Template1::__selector1());
    __this->__gen11_Left_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Left_Property::New1(__gen111, RecipePage__Template1::__selector2());
    ::g::Uno::UX::StringConcatOperator* __gen121 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen12_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen121, RecipePage__Template1::__selector1());
    ::g::Fuse::Controls::Image* __gen131 = ::g::Fuse::Controls::Image::New3();
    __this->__gen13_Url_inst1 = ::g::GlobalPot_FuseControlsImage_Url_Property::New1(__gen131, RecipePage__Template1::__selector3());
    ::g::Uno::UX::StringConcatOperator* __gen141 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen14_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen141, RecipePage__Template1::__selector1());
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp, RecipePage__Template1::__selector0());
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp3 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen11_Left_inst1, ::STRINGS[6/*"totalAmount"*/]);
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen12_Right_inst1, ::STRINGS[7/*"selectedMea...*/]);
    ::g::Fuse::Controls::Panel* temp6 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen14_Right_inst1, ::STRINGS[8/*"ingredient....*/]);
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp9 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[9/*"ingredient....*/]);
    self->Rows(::STRINGS[10/*"auto"*/]);
    self->ColumnCount(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp3->MinWidth(::g::Uno::UX::Size__New1(50.0f, 1));
    temp3->MinHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    temp3->Margin(::g::Uno::Float4__New2(15.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen101);
    __gen101->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    __gen101->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    __gen101->Name(RecipePage__Template1::__selector4());
    __gen101->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen101->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen101->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    __gen111->Target(__this->__gen10_Value_inst1);
    __gen121->Left(::STRINGS[11/*" "*/]);
    __gen121->Target(__this->__gen11_Right_inst1);
    temp6->MinWidth(::g::Uno::UX::Size__New1(40.0f, 1));
    temp6->MinHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    temp6->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp6, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen131);
    __gen131->MaxWidth(::g::Uno::UX::Size__New1(30.0f, 1));
    __gen131->MaxHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    __gen131->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    __gen131->Name(RecipePage__Template1::__selector5());
    ::g::Fuse::Controls::DockPanel::SetDock(__gen131, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen131->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    __gen141->Left(::STRINGS[12/*"https://coo...*/]);
    __gen141->Target(__this->__gen13_Url_inst1);
    temp8->MinWidth(::g::Uno::UX::Size__New1(40.0f, 1));
    temp8->MinHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    temp8->Margin(::g::Uno::Float4__New2(40.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp8, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = self, void();
}

// public Template1 New(RecipePage parent, RecipePage parentInstance) :98
void RecipePage__Template1__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template1** __retval)
{
    *__retval = RecipePage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector RecipePage__Template1::__selector0_;
::g::Uno::UX::Selector RecipePage__Template1::__selector1_;
::g::Uno::UX::Selector RecipePage__Template1::__selector2_;
::g::Uno::UX::Selector RecipePage__Template1::__selector3_;
::g::Uno::UX::Selector RecipePage__Template1::__selector4_;
::g::Uno::UX::Selector RecipePage__Template1::__selector5_;

// public Template1(RecipePage parent, RecipePage parentInstance) [instance] :98
void RecipePage__Template1::ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(RecipePage parent, RecipePage parentInstance) [static] :98
RecipePage__Template1* RecipePage__Template1::New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    RecipePage__Template1* obj1 = (RecipePage__Template1*)uNew(RecipePage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
