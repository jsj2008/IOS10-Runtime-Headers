//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNPropertySocialProfileCell : CNPropertySimpleTransportCell
{
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)transportButton3Clicked:(id)arg1;
- (void)transportButton2Clicked:(id)arg1;
- (void)transportButton1Clicked:(id)arg1;
- (id)transportsMapping;
- (void)updateTransportButtons;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (id)defaultContext;

@end

