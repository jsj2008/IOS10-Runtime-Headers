//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSString, SBUIPasscodeEntryField;

@protocol SBUIPasscodeEntryFieldDelegate <NSObject>

@optional
- (void)passcodeEntryFieldTextDidChange:(SBUIPasscodeEntryField *)arg1;
- (_Bool)passcodeEntryField:(SBUIPasscodeEntryField *)arg1 shouldInsertText:(NSString *)arg2;
- (void)passcodeEntryFieldDidCancelEntry:(SBUIPasscodeEntryField *)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(SBUIPasscodeEntryField *)arg1;
@end

