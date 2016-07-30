//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SGRealtimeContact, SGRecordId;

@protocol _SGSuggestionsServiceContactsConfirmRejectProtocol
- (void)rejectContactDetailRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)rejectContactDetailRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)confirmContactDetailRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)confirmContactDetailRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)rejectRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)rejectRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)confirmRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)confirmRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)rejectContact:(SGRealtimeContact *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)rejectContact:(SGRealtimeContact *)arg1 error:(id *)arg2;
- (void)confirmContact:(SGRealtimeContact *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)confirmContact:(SGRealtimeContact *)arg1 error:(id *)arg2;
@end
