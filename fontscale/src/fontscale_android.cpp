#if defined(DM_PLATFORM_ANDROID)

#include "fontscale_private.h"
#include "fontscale_jni.h"

namespace ext_fontscale {

float getFontScale() {
  ThreadAttacher attacher;
  JNIEnv* env = attacher.env;

  jclass cls = ClassLoader(env).load("com.defold.fontscale.FontScale");
  jmethodID method = env->GetStaticMethodID(cls, "getFontScale", "(Landroid/content/Context;)F");

  jfloat return_value =
      (jfloat)env->CallStaticFloatMethod(cls, method, dmGraphics::GetNativeAndroidActivity());
  return return_value;
}

}  // namespace ext_fontscale

#endif
