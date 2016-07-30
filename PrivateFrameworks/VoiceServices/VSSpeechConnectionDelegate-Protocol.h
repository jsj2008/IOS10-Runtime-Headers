//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString, VSInstrumentMetrics, VSSpeechConnection, VSSpeechRequest;

@protocol VSSpeechConnectionDelegate
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 successWithInstrumentMetrics:(VSInstrumentMetrics *)arg3;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(NSString *)arg4 error:(NSError *)arg5;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidContinue:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidPause:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidStart:(VSSpeechRequest *)arg2;
@end
