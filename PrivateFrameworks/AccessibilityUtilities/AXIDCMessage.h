//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUtilities/AXSimpleMessage.h>

@class NSString;

@interface AXIDCMessage : AXSimpleMessage
{
    NSString *_UUID;
    CDUnknownBlockType _sendCompletion;
}

+ (id)messageWithPayload:(id)arg1 andSendCompletion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType sendCompletion; // @synthesize sendCompletion=_sendCompletion;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)transportPayload;
- (void)dealloc;
- (id)initWithPayload:(id)arg1;

@end

