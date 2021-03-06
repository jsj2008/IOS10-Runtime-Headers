//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class AVVCAudioBuffer, CKVoiceController;

@protocol CKVoiceControllerDelegate <NSObject>
- (void)voiceController:(CKVoiceController *)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceControllerRecordBufferAvailable:(CKVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerDidFinishRecording:(CKVoiceController *)arg1 successfully:(_Bool)arg2;
- (void)voiceControllerDidStartRecording:(CKVoiceController *)arg1;
- (void)voiceControllerDidDetectStartpoint:(CKVoiceController *)arg1;
@end

