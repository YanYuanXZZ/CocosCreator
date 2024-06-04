// clang-format off

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.1.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

/****************************************************************************
 Copyright (c) 2022-2023 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable : 4101)
#endif


#define SWIG_STD_MOVE(OBJ) std::move(OBJ)


#include <stdio.h>


#include "bindings/jswrapper/SeApi.h"
#include "bindings/manual/jsb_conversions.h"
#include "bindings/manual/jsb_global.h"


#include "bindings/auto/jsb_network_auto.h"


#define cc_network_Downloader_onProgress_set(self_, val_) self_->setOnProgress(val_)
  


se::Class* __jsb_cc_network_DownloadTask_class = nullptr;
se::Object* __jsb_cc_network_DownloadTask_proto = nullptr;
SE_DECLARE_FINALIZE_FUNC(js_delete_cc_network_DownloadTask) 

static bool js_cc_network_DownloadTask_identifier_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::DownloadTask *arg1 = (cc::network::DownloadTask *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloadTask>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->identifier, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_DownloadTask_identifier_set) 

static bool js_cc_network_DownloadTask_identifier_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::DownloadTask *arg1 = (cc::network::DownloadTask *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloadTask>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->identifier, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->identifier, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_DownloadTask_identifier_get) 

static bool js_cc_network_DownloadTask_requestURL_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::DownloadTask *arg1 = (cc::network::DownloadTask *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloadTask>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->requestURL, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_DownloadTask_requestURL_set) 

static bool js_cc_network_DownloadTask_requestURL_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::DownloadTask *arg1 = (cc::network::DownloadTask *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloadTask>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->requestURL, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->requestURL, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_DownloadTask_requestURL_get) 

static bool js_cc_network_DownloadTask_storagePath_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::DownloadTask *arg1 = (cc::network::DownloadTask *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloadTask>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->storagePath, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_DownloadTask_storagePath_set) 

static bool js_cc_network_DownloadTask_storagePath_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::DownloadTask *arg1 = (cc::network::DownloadTask *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloadTask>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->storagePath, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->storagePath, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_DownloadTask_storagePath_get) 

static bool js_cc_network_DownloadTask_header_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::DownloadTask *arg1 = (cc::network::DownloadTask *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloadTask>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->header, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_DownloadTask_header_set) 

static bool js_cc_network_DownloadTask_header_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::DownloadTask *arg1 = (cc::network::DownloadTask *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloadTask>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->header, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->header, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_DownloadTask_header_get) 

static bool js_new_cc_network_DownloadTask(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    
    cc::network::DownloadTask *result;
    result = (cc::network::DownloadTask *)new cc::network::DownloadTask();
    
    
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT_WITH_INSTANCE(result);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_new_cc_network_DownloadTask, __jsb_cc_network_DownloadTask_class, js_delete_cc_network_DownloadTask)

static bool js_delete_cc_network_DownloadTask(se::State& s)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_delete_cc_network_DownloadTask) 

bool js_register_cc_network_DownloadTask(se::Object* obj) {
    auto* cls = se::Class::create("DownloadTask", obj, nullptr, _SE(js_new_cc_network_DownloadTask)); 
    
    cls->defineStaticProperty("__isJSB", se::Value(true), se::PropertyAttribute::READ_ONLY | se::PropertyAttribute::DONT_ENUM | se::PropertyAttribute::DONT_DELETE);
    cls->defineProperty("identifier", _SE(js_cc_network_DownloadTask_identifier_get), _SE(js_cc_network_DownloadTask_identifier_set)); 
    cls->defineProperty("requestURL", _SE(js_cc_network_DownloadTask_requestURL_get), _SE(js_cc_network_DownloadTask_requestURL_set)); 
    cls->defineProperty("storagePath", _SE(js_cc_network_DownloadTask_storagePath_get), _SE(js_cc_network_DownloadTask_storagePath_set)); 
    cls->defineProperty("header", _SE(js_cc_network_DownloadTask_header_get), _SE(js_cc_network_DownloadTask_header_set)); 
    
    
    
    
    
    cls->defineFinalizeFunction(_SE(js_delete_cc_network_DownloadTask));
    
    
    cls->install();
    JSBClassType::registerClass<cc::network::DownloadTask>(cls);
    
    __jsb_cc_network_DownloadTask_proto = cls->getProto();
    __jsb_cc_network_DownloadTask_class = cls;
    se::ScriptEngine::getInstance()->clearException();
    return true;
}


se::Class* __jsb_cc_network_DownloaderHints_class = nullptr;
se::Object* __jsb_cc_network_DownloaderHints_proto = nullptr;
SE_DECLARE_FINALIZE_FUNC(js_delete_cc_network_DownloaderHints) 

static bool js_cc_network_DownloaderHints_countOfMaxProcessingTasks_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::DownloaderHints *arg1 = (cc::network::DownloaderHints *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->countOfMaxProcessingTasks, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_DownloaderHints_countOfMaxProcessingTasks_set) 

static bool js_cc_network_DownloaderHints_countOfMaxProcessingTasks_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::DownloaderHints *arg1 = (cc::network::DownloaderHints *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->countOfMaxProcessingTasks, s.rval(), s.thisObject()); 
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_DownloaderHints_countOfMaxProcessingTasks_get) 

static bool js_cc_network_DownloaderHints_timeoutInSeconds_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::DownloaderHints *arg1 = (cc::network::DownloaderHints *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->timeoutInSeconds, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_DownloaderHints_timeoutInSeconds_set) 

static bool js_cc_network_DownloaderHints_timeoutInSeconds_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::DownloaderHints *arg1 = (cc::network::DownloaderHints *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->timeoutInSeconds, s.rval(), s.thisObject()); 
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_DownloaderHints_timeoutInSeconds_get) 

static bool js_cc_network_DownloaderHints_tempFileNameSuffix_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::DownloaderHints *arg1 = (cc::network::DownloaderHints *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->tempFileNameSuffix, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_DownloaderHints_tempFileNameSuffix_set) 

static bool js_cc_network_DownloaderHints_tempFileNameSuffix_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::DownloaderHints *arg1 = (cc::network::DownloaderHints *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->tempFileNameSuffix, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->tempFileNameSuffix, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_DownloaderHints_tempFileNameSuffix_get) 

static bool js_new_cc_network_DownloaderHints(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    
    cc::network::DownloaderHints *result;
    result = (cc::network::DownloaderHints *)new cc::network::DownloaderHints();
    
    
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT_WITH_INSTANCE(result);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_new_cc_network_DownloaderHints, __jsb_cc_network_DownloaderHints_class, js_delete_cc_network_DownloaderHints)

static bool js_delete_cc_network_DownloaderHints(se::State& s)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_delete_cc_network_DownloaderHints) 

template<>
bool sevalue_to_native(const se::Value &from, cc::network::DownloaderHints * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::network::DownloaderHints*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    
    json->getProperty("countOfMaxProcessingTasks", &field, true);
    if (!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->countOfMaxProcessingTasks), ctx);
    }
    
    
    json->getProperty("timeoutInSeconds", &field, true);
    if (!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->timeoutInSeconds), ctx);
    }
    
    
    json->getProperty("tempFileNameSuffix", &field, true);
    if (!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->tempFileNameSuffix), ctx);
    }
    
    
    return ok;
}


bool js_register_cc_network_DownloaderHints(se::Object* obj) {
    auto* cls = se::Class::create("DownloaderHints", obj, nullptr, _SE(js_new_cc_network_DownloaderHints)); 
    
    cls->defineStaticProperty("__isJSB", se::Value(true), se::PropertyAttribute::READ_ONLY | se::PropertyAttribute::DONT_ENUM | se::PropertyAttribute::DONT_DELETE);
    cls->defineProperty("countOfMaxProcessingTasks", _SE(js_cc_network_DownloaderHints_countOfMaxProcessingTasks_get), _SE(js_cc_network_DownloaderHints_countOfMaxProcessingTasks_set)); 
    cls->defineProperty("timeoutInSeconds", _SE(js_cc_network_DownloaderHints_timeoutInSeconds_get), _SE(js_cc_network_DownloaderHints_timeoutInSeconds_set)); 
    cls->defineProperty("tempFileNameSuffix", _SE(js_cc_network_DownloaderHints_tempFileNameSuffix_get), _SE(js_cc_network_DownloaderHints_tempFileNameSuffix_set)); 
    
    
    
    
    
    cls->defineFinalizeFunction(_SE(js_delete_cc_network_DownloaderHints));
    
    
    cls->install();
    JSBClassType::registerClass<cc::network::DownloaderHints>(cls);
    
    __jsb_cc_network_DownloaderHints_proto = cls->getProto();
    __jsb_cc_network_DownloaderHints_class = cls;
    se::ScriptEngine::getInstance()->clearException();
    return true;
}


se::Class* __jsb_cc_network_Downloader_class = nullptr;
se::Object* __jsb_cc_network_Downloader_proto = nullptr;
SE_DECLARE_FINALIZE_FUNC(js_delete_cc_network_Downloader) 

static bool js_new_cc_network_Downloader__SWIG_0(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    CC_UNUSED bool ok = true;
    cc::network::Downloader *result;
    result = (cc::network::Downloader *)new cc::network::Downloader();
    
    
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT_WITH_INSTANCE(result);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}


static bool js_new_cc_network_Downloader__SWIG_1(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    CC_UNUSED bool ok = true;
    cc::network::DownloaderHints *arg1 = 0 ;
    cc::network::DownloaderHints temp1 ;
    cc::network::Downloader *result;
    
    ok &= sevalue_to_native(args[0], &temp1, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    arg1 = &temp1;
    
    result = (cc::network::Downloader *)new cc::network::Downloader((cc::network::DownloaderHints const &)*arg1);
    
    
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT_WITH_INSTANCE(result);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}


static bool js_new_cc_network_Downloader(se::State& s) // NOLINT(readability-identifier-naming)
{
    size_t argc = s.args().size();
    bool ret = false;
    
    if(argc == 0) {
        ret = js_new_cc_network_Downloader__SWIG_0(s);
        if (ret) {
            return ret; 
        } /* reset exception and return */
    }
    
    if(argc == 1) {
        ret = js_new_cc_network_Downloader__SWIG_1(s);
        if (ret) {
            return ret; 
        } /* reset exception and return */
    }
    
    SE_REPORT_ERROR("Illegal arguments for construction of Downloader");
    return false;
}
SE_BIND_CTOR(js_new_cc_network_Downloader, __jsb_cc_network_Downloader_class, js_delete_cc_network_Downloader)

static bool js_delete_cc_network_Downloader(se::State& s)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_delete_cc_network_Downloader) 

static bool js_cc_network_Downloader_onDataTaskSuccess_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->onDataTaskSuccess, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_Downloader_onDataTaskSuccess_set) 

static bool js_cc_network_Downloader_onDataTaskSuccess_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->onDataTaskSuccess, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->onDataTaskSuccess, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_Downloader_onDataTaskSuccess_get) 

static bool js_cc_network_Downloader_onFileTaskSuccess_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->onFileTaskSuccess, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_Downloader_onFileTaskSuccess_set) 

static bool js_cc_network_Downloader_onFileTaskSuccess_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->onFileTaskSuccess, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->onFileTaskSuccess, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_Downloader_onFileTaskSuccess_get) 

static bool js_cc_network_Downloader_onTaskProgress_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->onTaskProgress, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_Downloader_onTaskProgress_set) 

static bool js_cc_network_Downloader_onTaskProgress_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->onTaskProgress, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->onTaskProgress, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_Downloader_onTaskProgress_get) 

static bool js_cc_network_Downloader_onTaskError_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &arg1->onTaskError, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments"); 
    
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_Downloader_onTaskError_set) 

static bool js_cc_network_Downloader_onTaskError_get(se::State& s)
{
    CC_UNUSED bool ok = true;
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= nativevalue_to_se(arg1->onTaskError, s.rval(), s.thisObject() /*ctx*/);
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    SE_HOLD_RETURN_VALUE(arg1->onTaskError, s.thisObject(), s.rval());
    
    
    
    return true;
}
SE_BIND_PROP_GET(js_cc_network_Downloader_onTaskError_get) 

static bool js_cc_network_Downloader_setOnTaskProgress(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    std::function< void (cc::network::DownloadTask const &,uint32_t,uint32_t,uint32_t) > *arg2 = 0 ;
    std::function< void (cc::network::DownloadTask const &,uint32_t,uint32_t,uint32_t) > temp2 ;
    
    if(argc != 1) {
        SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
        return false;
    }
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &temp2, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    arg2 = &temp2;
    
    (arg1)->setOnTaskProgress((std::function< void (cc::network::DownloadTask const &,uint32_t,uint32_t,uint32_t) > const &)*arg2);
    
    
    return true;
}
SE_BIND_FUNC(js_cc_network_Downloader_setOnTaskProgress) 

static bool js_cc_network_Downloader_abort(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    std::shared_ptr< cc::network::DownloadTask const > *arg2 = 0 ;
    std::shared_ptr< cc::network::DownloadTask const > temp2 ;
    
    if(argc != 1) {
        SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
        return false;
    }
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &temp2, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    arg2 = &temp2;
    
    (arg1)->abort((std::shared_ptr< cc::network::DownloadTask const > const &)*arg2);
    
    
    return true;
}
SE_BIND_FUNC(js_cc_network_Downloader_abort) 

static bool js_cc_network_Downloader_onProgress_set(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    cc::network::Downloader *arg1 = (cc::network::Downloader *) NULL ;
    std::function< void (cc::network::DownloadTask const &,uint32_t,uint32_t,uint32_t) > *arg2 = 0 ;
    std::function< void (cc::network::DownloadTask const &,uint32_t,uint32_t,uint32_t) > temp2 ;
    
    arg1 = SE_THIS_OBJECT<cc::network::Downloader>(s);
    if (nullptr == arg1) return true;
    
    ok &= sevalue_to_native(args[0], &temp2, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    arg2 = &temp2;
    
    cc_network_Downloader_onProgress_set(arg1,*arg2);
    
    
    return true;
}
SE_BIND_PROP_SET(js_cc_network_Downloader_onProgress_set) 

bool js_register_cc_network_Downloader(se::Object* obj) {
    auto* cls = se::Class::create("Downloader", obj, nullptr, _SE(js_new_cc_network_Downloader)); 
    
    cls->defineStaticProperty("__isJSB", se::Value(true), se::PropertyAttribute::READ_ONLY | se::PropertyAttribute::DONT_ENUM | se::PropertyAttribute::DONT_DELETE);
    cls->defineProperty("onDataTaskSuccess", _SE(js_cc_network_Downloader_onDataTaskSuccess_get), _SE(js_cc_network_Downloader_onDataTaskSuccess_set)); 
    cls->defineProperty("onFileTaskSuccess", _SE(js_cc_network_Downloader_onFileTaskSuccess_get), _SE(js_cc_network_Downloader_onFileTaskSuccess_set)); 
    cls->defineProperty("onTaskProgress", _SE(js_cc_network_Downloader_onTaskProgress_get), _SE(js_cc_network_Downloader_onTaskProgress_set)); 
    cls->defineProperty("onTaskError", _SE(js_cc_network_Downloader_onTaskError_get), _SE(js_cc_network_Downloader_onTaskError_set)); 
    cls->defineProperty("onProgress", nullptr, _SE(js_cc_network_Downloader_onProgress_set)); 
    
    cls->defineFunction("setOnTaskProgress", _SE(js_cc_network_Downloader_setOnTaskProgress)); 
    cls->defineFunction("abort", _SE(js_cc_network_Downloader_abort)); 
    
    
    
    
    cls->defineFinalizeFunction(_SE(js_delete_cc_network_Downloader));
    
    
    cls->install();
    JSBClassType::registerClass<cc::network::Downloader>(cls);
    
    __jsb_cc_network_Downloader_proto = cls->getProto();
    __jsb_cc_network_Downloader_class = cls;
    se::ScriptEngine::getInstance()->clearException();
    return true;
}




bool register_all_network(se::Object* obj) {
    // Get the ns
    se::Value nsVal;
    if (!obj->getProperty("jsb", &nsVal, true))
    {
        se::HandleObject jsobj(se::Object::createPlainObject());
        nsVal.setObject(jsobj);
        obj->setProperty("jsb", nsVal);
    }
    se::Object* ns = nsVal.toObject();
    /* Register classes */
    js_register_cc_network_DownloadTask(ns); 
    js_register_cc_network_DownloaderHints(ns); 
    js_register_cc_network_Downloader(ns); 
    
    /* Register global variables & global functions */
    
    
    
    return true;
}


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
// clang-format on