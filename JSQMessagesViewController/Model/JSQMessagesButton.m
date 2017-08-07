//
//  JSQMessagesButton.m
//  JSQMessages
//
//  Created by 莊英祺 on 2017/8/7.
//  Copyright © 2017年 Hexed Bits. All rights reserved.
//

#import "JSQMessagesButton.h"

@implementation JSQMessagesButton

#pragma mark - Initialization

+ (instancetype)buttonWithImage:(UIImage *)image
{
        NSParameterAssert(image != nil);
    
        return [[JSQMessagesButton alloc] initWithButtonImage:image
                                                                               color:nil
                                                                                text:nil];
    }

+ (instancetype)buttonWithImageColor:(UIColor *)color;
{
        return [[JSQMessagesButton alloc] initWithButtonImage:nil
                                                                         color:color
                                                                          text:nil];
    }

+ (instancetype)buttonWithText:(NSString *)text;
{
        return [[JSQMessagesButton alloc] initWithButtonImage:nil
                                                                               color:nil
                                                                                text:text];
    }


- (instancetype)initWithButtonImage:(nullable UIImage *)image
                              color:(nullable UIColor *)color
                               text:(nullable NSString *)text
{
    //    NSParameterAssert(!(image == nil && text == nil));
    
        self = [super init];
        if (self) {
                _image = image;
                _color = color;
                _text = text;
            }
        return self;
    }

#pragma mark - NSObject

- (NSString *)description
{
        return [NSString stringWithFormat:@"<%@: image=%@, color=%@, text=%@>",
                             [self class], self.image, self.color, self.text];
    }

#pragma mark - NSCopying

- (instancetype)copyWithZone:(NSZone *)zone
{
        return [[[self class] allocWithZone:zone] initWithButtonImage:[UIImage imageWithCGImage:self.image.CGImage]
                                                                             color:self.color
                                                                              text: self.text];
    }

@end
