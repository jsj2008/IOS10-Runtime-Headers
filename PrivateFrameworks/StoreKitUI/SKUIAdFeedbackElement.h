//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIButtonViewElement;

@interface SKUIAdFeedbackElement : SKUIViewElement
{
    NSString *_title;
    NSString *_bodyString;
}

+ (_Bool)isEnabled;
@property(readonly, nonatomic) NSString *bodyString; // @synthesize bodyString=_bodyString;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIButtonViewElement *noButton;
@property(readonly, nonatomic) SKUIButtonViewElement *yesButton;

@end
