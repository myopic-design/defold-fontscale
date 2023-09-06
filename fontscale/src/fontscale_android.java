package com.defold.fontscale;

import android.content.Context;

class FontScale {
  public static float getFontScale(Context context) {
    return context.getResources().getConfiguration().fontScale;
  }
}
