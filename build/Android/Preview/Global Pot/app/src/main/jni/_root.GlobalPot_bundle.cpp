// This file was generated based on 'F:\Global Pot_App\Global Pot.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[7];

namespace g{

// public static generated class GlobalPot_bundle :0
// {
// static GlobalPot_bundle() :0
static void GlobalPot_bundle__cctor__fn(uType* __type)
{
    GlobalPot_bundle::Login6d08c768_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[1/*"login-abd13...*/]);
    GlobalPot_bundle::logo_v026ae4f6da_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[2/*"logo_v02-8a...*/]);
    GlobalPot_bundle::PatuaOneRegular35e3fccf_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[3/*"patuaone-re...*/]);
    GlobalPot_bundle::Recipe_API1e1be570_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[4/*"recipe_api-...*/]);
    GlobalPot_bundle::Recipes_APIeb7d723d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[5/*"recipes_api...*/]);
    GlobalPot_bundle::RobotoCondensedRegular9a86a136_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[6/*"robotoconde...*/]);
}

static void GlobalPot_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Global Pot");
    ::STRINGS[1] = uString::Const("login-abd13efb.js");
    ::STRINGS[2] = uString::Const("logo_v02-8a9c4d29.png");
    ::STRINGS[3] = uString::Const("patuaone-regular-29b8ccf8.ttf");
    ::STRINGS[4] = uString::Const("recipe_api-fcdd8df8.js");
    ::STRINGS[5] = uString::Const("recipes_api-5dc99a15.js");
    ::STRINGS[6] = uString::Const("robotocondensed-reg-7877303f.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::Login6d08c768_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::logo_v026ae4f6da_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::PatuaOneRegular35e3fccf_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::Recipe_API1e1be570_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::Recipes_APIeb7d723d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::RobotoCondensedRegular9a86a136_, uFieldFlagsStatic);
    type->Reflection.SetFields(6,
        new uField("Login6d08c768", 0),
        new uField("logo_v026ae4f6da", 1),
        new uField("PatuaOneRegular35e3fccf", 2),
        new uField("Recipe_API1e1be570", 3),
        new uField("Recipes_APIeb7d723d", 4),
        new uField("RobotoCondensedRegular9a86a136", 5));
}

uClassType* GlobalPot_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("GlobalPot_bundle", options);
    type->fp_build_ = GlobalPot_bundle_build;
    type->fp_cctor_ = GlobalPot_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::Login6d08c768_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::logo_v026ae4f6da_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::PatuaOneRegular35e3fccf_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::Recipe_API1e1be570_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::Recipes_APIeb7d723d_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::RobotoCondensedRegular9a86a136_;
// }

} // ::g
