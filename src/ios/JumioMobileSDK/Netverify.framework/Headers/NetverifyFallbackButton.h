//
//  NetverifyFallbackButton.h
//  JumioMobileSDK
//
//  Created by Lukas Danzer on 24/01/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NetverifyFallbackButton : UIButton

- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (UIColor *)backgroundColorForState:(UIControlState)state UI_APPEARANCE_SELECTOR;

@end
