// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.iOS.Controls.NavDelegate.h>
#include <Fuse.iOS.Controls.WebView.h>
#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[2];
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Controls.WebView\0.44.1\ios\$.uno
// -----------------------------------------------------------------------------------------------

// public sealed extern class WebView :178
// {
// ~WebView() :217
static void WebView__Finalize_fn(WebView* __this)
{
    if (__this->Handle1 != NULL)
        ::g::Fuse::Platform::AppEvents::remove_LowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnLowMemory_fn, __this));

    if (__this->_isUpdating)
        __this->_isUpdating = false;

    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, __this), 0);
}

static void WebView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("about:blank");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(WebView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface5),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface6));
    type->SetFields(5,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _file), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _isUpdating), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _source), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _webViewHost), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, Handle1), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, NavigationDelegate), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _BaseUrl), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _ZoomEnabled), 0,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(::g::Fuse::iOS::Controls::WebView, BeginLoading1), 0,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(::g::Fuse::iOS::Controls::WebView, PageLoaded1), 0,
        ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/], offsetof(::g::Fuse::iOS::Controls::WebView, ProgressChanged1), 0,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(::g::Fuse::iOS::Controls::WebView, UrlChanged1), 0);
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.iOS.Controls.WebView", options);
    type->fp_build_ = WebView_build;
    type->fp_Finalize = (void(*)(uObject*))WebView__Finalize_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))WebView__Dispose_fn;
    type->interface3.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface3.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface3.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface3.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface3.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface3.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface3.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface3.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface3.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface3.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface3.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface3.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface3.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface3.fp_get_ZoomEnabled = (void(*)(uObject*, bool*))WebView__get_ZoomEnabled_fn;
    type->interface3.fp_set_ZoomEnabled = (void(*)(uObject*, bool*))WebView__set_ZoomEnabled_fn;
    type->interface3.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface3.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface3.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface3.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface3.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface3.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface4.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface4.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface4.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface5.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface5.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface5.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface5.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface6.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface6.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WebView__Dispose_fn;
    return type;
}

// private WebView(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle) :194
void WebView__ctor_2_fn(WebView* __this, ::g::Fuse::Controls::WebView* webViewHost, ::g::ObjC::Object* wvHandle)
{
    __this->ctor_2(webViewHost, wvHandle);
}

// public generated string get_BaseUrl() :232
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :232
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :350
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :350
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :344
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :345
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public static Fuse.iOS.Controls.WebView Create(Fuse.Controls.WebView webViewHost) :188
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, WebView** __retval)
{
    *__retval = WebView::Create(webViewHost);
}

// public override sealed void Dispose() :204
void WebView__Dispose_fn(WebView* __this)
{
    uPtr(__this->_webViewHost)->WebViewClient(NULL);
    __this->_webViewHost = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// public void Eval(string js) :282
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> onResult) :287
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* onResult)
{
    __this->Eval1(js, onResult);
}

// public Uno.UX.FileSource get_File() :295
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :296
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :346
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :347
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// private void LoadFile(Uno.UX.FileSource file) :304
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :241
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :246
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public bool get_Loading() :341
void WebView__get_Loading_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->Loading();
}

// public void LoadUrl(string url) :258
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// private WebView New(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle) :194
void WebView__New1_fn(::g::Fuse::Controls::WebView* webViewHost, ::g::ObjC::Object* wvHandle, WebView** __retval)
{
    *__retval = WebView::New1(webViewHost, wvHandle);
}

// private void OnBeginNavigation() :323
void WebView__OnBeginNavigation_fn(WebView* __this)
{
    __this->OnBeginNavigation();
}

// private void OnFinishNavigation() :335
void WebView__OnFinishNavigation_fn(WebView* __this)
{
    __this->OnFinishNavigation();
}

// private void OnLowMemory() :226
void WebView__OnLowMemory_fn(WebView* __this)
{
    __this->OnLowMemory();
}

// private void OnProgressChanged() :316
void WebView__OnProgressChanged_fn(WebView* __this)
{
    __this->OnProgressChanged();
}

// private void OnUpdate() :272
void WebView__OnUpdate_fn(WebView* __this)
{
    __this->OnUpdate();
}

// private void OnURLChanged() :329
void WebView__OnURLChanged_fn(WebView* __this)
{
    __this->OnURLChanged();
}

// public generated void add_PageLoaded(Uno.EventHandler value) :351
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :351
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :342
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :183
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :183
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :348
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :237
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :238
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// private void StartProgressUpdate() :266
void WebView__StartProgressUpdate_fn(WebView* __this)
{
    __this->StartProgressUpdate();
}

// public void Stop() :349
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :254
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :255
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :352
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :352
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public generated bool get_ZoomEnabled() :353
void WebView__get_ZoomEnabled_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->ZoomEnabled();
}

// public generated void set_ZoomEnabled(bool value) :353
void WebView__set_ZoomEnabled_fn(WebView* __this, bool* value)
{
    __this->ZoomEnabled(*value);
}

// private WebView(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle) [instance] :194
void WebView::ctor_2(::g::Fuse::Controls::WebView* webViewHost, ::g::ObjC::Object* wvHandle)
{
    ctor_1(wvHandle);
    _webViewHost = webViewHost;
    Handle1 = wvHandle;
    NavigationDelegate = ::g::Fuse::iOS::Controls::NavDelegate::Create(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnBeginNavigation_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnFinishNavigation_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnURLChanged_fn, this));
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::SetNavigationDelegate(Handle1, NavigationDelegate);
    ::g::Fuse::Platform::AppEvents::add_LowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnLowMemory_fn, this));
    uPtr(_webViewHost)->WebViewClient((uObject*)this);
}

// public generated string get_BaseUrl() [instance] :232
uString* WebView::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :232
void WebView::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :350
void WebView::add_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :350
void WebView::remove_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :344
bool WebView::CanGoBack()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetCanGoBack(Handle1);
}

// public bool get_CanGoForward() [instance] :345
bool WebView::CanGoForward()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetCanGoForward(Handle1);
}

// public void Eval(string js) [instance] :282
void WebView::Eval(uString* js)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebView(Handle1, js);
}

// public void Eval(string js, Uno.Action<string> onResult) [instance] :287
void WebView::Eval1(uString* js, uDelegate* onResult)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebViewWithHandler(Handle1, js, onResult);
}

// public Uno.UX.FileSource get_File() [instance] :295
::g::Uno::UX::FileSource* WebView::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :296
void WebView::File(::g::Uno::UX::FileSource* value)
{
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :346
void WebView::GoBack()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::GoBack(Handle1);
}

// public void GoForward() [instance] :347
void WebView::GoForward()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::GoForward(Handle1);
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :304
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uString* data = ::STRINGS[0/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHtml(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :241
void WebView::LoadHtml(uString* html)
{
    LoadHtml1(html, ::STRINGS[0/*""*/]);
}

// public void LoadHtml(string html, string baseUrl) [instance] :246
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::LoadHTML(Handle1, html, baseUrl);
    StartProgressUpdate();
}

// public bool get_Loading() [instance] :341
bool WebView::Loading()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetIsLoading(Handle1);
}

// public void LoadUrl(string url) [instance] :258
void WebView::LoadUrl(uString* url)
{
    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[0/*""*/]))
        url = ::STRINGS[1/*"about:blank"*/];

    ::g::Fuse::iOS::Controls::WKWebViewHelpers::LoadURL(Handle1, url);
    StartProgressUpdate();
}

// private void OnBeginNavigation() [instance] :323
void WebView::OnBeginNavigation()
{
    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnFinishNavigation() [instance] :335
void WebView::OnFinishNavigation()
{
    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnLowMemory() [instance] :226
void WebView::OnLowMemory()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::FreeMemory();
}

// private void OnProgressChanged() [instance] :316
void WebView::OnProgressChanged()
{
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[2/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), &ret2), ret2));
}

// private void OnUpdate() [instance] :272
void WebView::OnUpdate()
{
    OnProgressChanged();

    if (!Loading())
    {
        _isUpdating = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
    }
}

// private void OnURLChanged() [instance] :329
void WebView::OnURLChanged()
{
    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :351
void WebView::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :351
void WebView::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :342
double WebView::Progress()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetEstimatedProgress(Handle1);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :183
void WebView::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :183
void WebView::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :348
void WebView::Reload()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::Reload(Handle1);
}

// public string get_Source() [instance] :237
uString* WebView::Source()
{
    return _source;
}

// public void set_Source(string value) [instance] :238
void WebView::Source(uString* value)
{
    LoadHtml(_source = value);
}

// private void StartProgressUpdate() [instance] :266
void WebView::StartProgressUpdate()
{
    if (!_isUpdating)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
}

// public void Stop() [instance] :349
void WebView::Stop()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::StopLoading(Handle1);
}

// public string get_Url() [instance] :254
uString* WebView::Url()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetURL(Handle1);
}

// public void set_Url(string value) [instance] :255
void WebView::Url(uString* value)
{
    LoadUrl(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :352
void WebView::add_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :352
void WebView::remove_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated bool get_ZoomEnabled() [instance] :353
bool WebView::ZoomEnabled()
{
    return _ZoomEnabled;
}

// public generated void set_ZoomEnabled(bool value) [instance] :353
void WebView::ZoomEnabled(bool value)
{
    _ZoomEnabled = value;
}

// public static Fuse.iOS.Controls.WebView Create(Fuse.Controls.WebView webViewHost) [static] :188
WebView* WebView::Create(::g::Fuse::Controls::WebView* webViewHost)
{
    ::g::ObjC::Object* wv = ::g::Fuse::iOS::Controls::WKWebViewHelpers::CreateWebView(uPtr(webViewHost)->ZoomEnabled());
    return WebView::New1(webViewHost, wv);
}

// private WebView New(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle) [static] :194
WebView* WebView::New1(::g::Fuse::Controls::WebView* webViewHost, ::g::ObjC::Object* wvHandle)
{
    WebView* obj1 = (WebView*)uNew(WebView_typeof());
    obj1->ctor_2(webViewHost, wvHandle);
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Controls
