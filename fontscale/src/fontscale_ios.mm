#if defined(DM_PLATFORM_IOS)

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#include "fontscale_private.h"

namespace ext_fontscale {

float getFontScale() {
  UIContentSizeCategory fontCategory =
      [[UIApplication sharedApplication] preferredContentSizeCategory];
  if ([fontCategory isEqualToString:UIContentSizeCategoryExtraSmall]) {
    return 0.823;
  } else if ([fontCategory isEqualToString:UIContentSizeCategorySmall]) {
    return 0.882;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryMedium]) {
    return 0.941;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryLarge]) {
    return 1.0;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryExtraLarge]) {
    return 1.118;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryExtraExtraLarge]) {
    return 1.235;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryExtraExtraExtraLarge]) {
    return 1.353;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryAccessibilityMedium]) {
    return 1.786;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryAccessibilityLarge]) {
    return 2.143;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryAccessibilityExtraLarge]) {
    return 2.643;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryAccessibilityExtraExtraLarge]) {
    return 3.143;
  } else if ([fontCategory isEqualToString:UIContentSizeCategoryAccessibilityExtraExtraExtraLarge]) {
    return 3.571;
  } else {
    return 1.0;
  }
}

}  // namespace ext_fontscale

#endif