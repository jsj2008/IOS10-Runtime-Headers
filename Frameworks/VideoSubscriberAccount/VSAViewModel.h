//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSItemProvider, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VSAViewModel : NSObject
{
    _Bool _beginValidationButtonEnabled;
    _Bool _showDeleteAccountButton;
    unsigned long long _validationState;
    unsigned long long _viewState;
    NSError *_error;
    NSString *_title;
    NSString *_beginValidationButtonTitle;
    unsigned long long _deleteAccountState;
    NSItemProvider *_logoProvider;
    UIImage *_logo;
    NSString *_logoAccessibilityLabel;
}

@property(copy, nonatomic) NSString *logoAccessibilityLabel; // @synthesize logoAccessibilityLabel=_logoAccessibilityLabel;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSItemProvider *logoProvider; // @synthesize logoProvider=_logoProvider;
@property(nonatomic) unsigned long long deleteAccountState; // @synthesize deleteAccountState=_deleteAccountState;
@property(nonatomic) _Bool showDeleteAccountButton; // @synthesize showDeleteAccountButton=_showDeleteAccountButton;
@property(copy, nonatomic) NSString *beginValidationButtonTitle; // @synthesize beginValidationButtonTitle=_beginValidationButtonTitle;
@property(nonatomic, getter=isBeginValidationButtonEnabled) _Bool beginValidationButtonEnabled; // @synthesize beginValidationButtonEnabled=_beginValidationButtonEnabled;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
@property(nonatomic) unsigned long long validationState; // @synthesize validationState=_validationState;
- (void).cxx_destruct;

@end
