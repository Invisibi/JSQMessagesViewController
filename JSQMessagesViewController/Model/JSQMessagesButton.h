//
//  JSQMessagesButton.h
//  JSQMessages
//
//  Created by 莊英祺 on 2017/8/7.
//  Copyright © 2017年 Hexed Bits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JSQMessageButtonDataSource.h"

NS_ASSUME_NONNULL_BEGIN

/**
   *  A `JSQMessagesButton` model object represents an button.
   *  This is a concrete class that implements the `JSQMessageButtonDataSource` protocol.
   *  It contains a regular button image, color, and button text.
   *
   */
@interface JSQMessagesButton : NSObject <JSQMessageButtonDataSource, NSCopying>

/**
   *  The button image for a regular display state.
   */
@property (nonatomic, strong, nullable) UIImage *image;

/**
   *  The button color for a regular display state.
   */

@property (nonatomic, strong, nullable) UIColor *color;

/**
   *  The button text for a regular display state.
   */
@property (nonatomic, strong, nullable) NSString *text;

/**
   *  Initializes and returns an button image object having the specified image.
   *
   *  @param image The image for this button image. This image will be used for the all of the following
   *  properties: image, color, text;
   *  This value must not be `nil`.
   *
   *  @return An initialized `JSQMessagesButton` object.
   */
+ (instancetype)buttonWithImage:(UIImage *)image;

+ (instancetype)buttonWithImageColor:(UIColor *)color;

/**
   *  Initializes and returns an button text object having the specified text.
   *
   *  @param text The button text for this  text.
   *
   *  @return An initialized `JSQMessagesButton` object.
   */
+ (instancetype)buttonWithText:(NSString *)text;

/**
   *  Initializes and returns an button object having the specified image, color, text.
   *
   *  @param image      The button image for a regular display state.
   *  @param text       The button title for a regular display state.
   *
   *  @return An initialized `JSQMessagesTotalLikesButton` object.
   */
- (instancetype)initWithButtonImage:(nullable UIImage *)image
                              color:(nullable UIColor *)color
                               text:(nullable NSString *)text NS_DESIGNATED_INITIALIZER;

/**
   *  Not a valid initializer.
   */
- (id)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
