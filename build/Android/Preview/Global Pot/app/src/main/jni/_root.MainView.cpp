// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_bundle.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[79];
static uType* TYPES[2];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :70
static void MainView__cctor__fn(uType* __type)
{
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"MainRouter"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[1/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[2/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[3/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[4/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[5/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[6/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[7/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[8/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[9/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[10/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[11/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[12/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[13/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[14/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[15/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[16/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[17/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[18/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[19/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[20/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[21/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[22/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[23/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[24/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[25/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[26/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[27/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[28/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[29/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[30/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[31/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[32/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[32/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[33/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[33/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[34/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[34/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[35/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[35/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[36/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[36/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[37/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[37/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[38/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[38/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[39/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[39/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[40/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[40/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[41/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[41/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[42/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[42/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[43/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[43/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[44/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[44/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[45/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[45/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[46/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[46/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[47/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[47/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[48/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[48/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[49/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[50/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[51/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[52/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[53/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[54/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[55/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[56/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[57/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[57/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[58/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[59/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[60/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[60/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[61/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[62/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[63/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[63/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[64/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[65/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[66/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[67/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[68/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[69/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[70/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[71/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[72/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[73/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[74/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[75/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Patua_, ::STRINGS[76/*"Patua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Roboto_, ::STRINGS[77/*"Roboto"*/]);
    MainView::Patua_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::PatuaOneRegular35e3fccf()));
    MainView::Roboto_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::RobotoCondensedRegular9a86a136()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Patua_, ::STRINGS[76/*"Patua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Roboto_, ::STRINGS[77/*"Roboto"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("MainRouter");
    ::STRINGS[1] = uString::Const("Linear");
    ::STRINGS[2] = uString::Const("QuadraticIn");
    ::STRINGS[3] = uString::Const("QuadraticOut");
    ::STRINGS[4] = uString::Const("QuadraticInOut");
    ::STRINGS[5] = uString::Const("CubicIn");
    ::STRINGS[6] = uString::Const("CubicOut");
    ::STRINGS[7] = uString::Const("CubicInOut");
    ::STRINGS[8] = uString::Const("QuarticIn");
    ::STRINGS[9] = uString::Const("QuarticOut");
    ::STRINGS[10] = uString::Const("QuarticInOut");
    ::STRINGS[11] = uString::Const("QuinticIn");
    ::STRINGS[12] = uString::Const("QuinticOut");
    ::STRINGS[13] = uString::Const("QuinticInOut");
    ::STRINGS[14] = uString::Const("SinusoidalIn");
    ::STRINGS[15] = uString::Const("SinusoidalOut");
    ::STRINGS[16] = uString::Const("SinusoidalInOut");
    ::STRINGS[17] = uString::Const("ExponentialIn");
    ::STRINGS[18] = uString::Const("ExponentialOut");
    ::STRINGS[19] = uString::Const("ExponentialInOut");
    ::STRINGS[20] = uString::Const("CircularIn");
    ::STRINGS[21] = uString::Const("CircularOut");
    ::STRINGS[22] = uString::Const("CircularInOut");
    ::STRINGS[23] = uString::Const("ElasticIn");
    ::STRINGS[24] = uString::Const("ElasticOut");
    ::STRINGS[25] = uString::Const("ElasticInOut");
    ::STRINGS[26] = uString::Const("BackIn");
    ::STRINGS[27] = uString::Const("BackOut");
    ::STRINGS[28] = uString::Const("BackInOut");
    ::STRINGS[29] = uString::Const("BounceIn");
    ::STRINGS[30] = uString::Const("BounceOut");
    ::STRINGS[31] = uString::Const("BounceInOut");
    ::STRINGS[32] = uString::Const("Transparent");
    ::STRINGS[33] = uString::Const("Black");
    ::STRINGS[34] = uString::Const("Silver");
    ::STRINGS[35] = uString::Const("Gray");
    ::STRINGS[36] = uString::Const("White");
    ::STRINGS[37] = uString::Const("Maroon");
    ::STRINGS[38] = uString::Const("Red");
    ::STRINGS[39] = uString::Const("Purple");
    ::STRINGS[40] = uString::Const("Fuchsia");
    ::STRINGS[41] = uString::Const("Green");
    ::STRINGS[42] = uString::Const("Lime");
    ::STRINGS[43] = uString::Const("Olive");
    ::STRINGS[44] = uString::Const("Yellow");
    ::STRINGS[45] = uString::Const("Navy");
    ::STRINGS[46] = uString::Const("Blue");
    ::STRINGS[47] = uString::Const("Teal");
    ::STRINGS[48] = uString::Const("Aqua");
    ::STRINGS[49] = uString::Const("TopLeft");
    ::STRINGS[50] = uString::Const("Center");
    ::STRINGS[51] = uString::Const("Anchor");
    ::STRINGS[52] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[53] = uString::Const("VerticalBoxCenter");
    ::STRINGS[54] = uString::Const("TransformOriginOffset");
    ::STRINGS[55] = uString::Const("PositionOffset");
    ::STRINGS[56] = uString::Const("SizeFactor");
    ::STRINGS[57] = uString::Const("Size");
    ::STRINGS[58] = uString::Const("GiveFocus");
    ::STRINGS[59] = uString::Const("Keyboard");
    ::STRINGS[60] = uString::Const("LayoutChange");
    ::STRINGS[61] = uString::Const("WorldPositionChange");
    ::STRINGS[62] = uString::Const("PositionChange");
    ::STRINGS[63] = uString::Const("SizeChange");
    ::STRINGS[64] = uString::Const("Points");
    ::STRINGS[65] = uString::Const("Pixels");
    ::STRINGS[66] = uString::Const("ContentSize");
    ::STRINGS[67] = uString::Const("ScrollViewSize");
    ::STRINGS[68] = uString::Const("PreloadRetain");
    ::STRINGS[69] = uString::Const("UnloadUnused");
    ::STRINGS[70] = uString::Const("PlatformDefault");
    ::STRINGS[71] = uString::Const("Identity");
    ::STRINGS[72] = uString::Const("Local");
    ::STRINGS[73] = uString::Const("ParentSize");
    ::STRINGS[74] = uString::Const("Width");
    ::STRINGS[75] = uString::Const("Height");
    ::STRINGS[76] = uString::Const("Patua");
    ::STRINGS[77] = uString::Const("Roboto");
    ::STRINGS[78] = uString::Const("RecipePage");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(9,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MainView, MainRouter), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Patua_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Roboto_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Patua", 11),
        new uField("Roboto", 12));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 13;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :175
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :179
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :175
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

::g::Uno::UX::Selector MainView::__selector0_;
uSStrong< ::g::Fuse::Font*> MainView::Patua_;
uSStrong< ::g::Fuse::Font*> MainView::Roboto_;

// public MainView() [instance] :175
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :179
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::Http* temp = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp1 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp2 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp3 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp4 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Polyfills::Window::WindowModule* temp5 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp6 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp7 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp8 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp9 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp10 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp11 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp12 = ::g::FuseJS::UserEvents::New2();
    MainRouter = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::Navigator* temp13 = ::g::Fuse::Controls::Navigator::New4();
    MainView__Template* LoginPage = MainView__Template::New2(this, this);
    MainView__Template1* OverviewPage = MainView__Template1::New2(this, this);
    MainView__Template2* RecipePage = MainView__Template2::New2(this, this);
    uPtr(MainRouter)->Name(MainView::__selector0());
    temp13->DefaultTemplate(::STRINGS[78/*"RecipePage"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Templates()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Template>*/]), LoginPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Templates()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Template>*/]), OverviewPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Templates()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Template>*/]), RecipePage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), MainRouter);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
}

// public MainView New() [static] :175
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
