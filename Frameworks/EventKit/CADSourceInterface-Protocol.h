//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol CADSourceInterface
- (void)CADSourceRefresh:(CDStruct_f683c4ba)arg1 isUserRequested:(_Bool)arg2 reply:(void (^)(int))arg3;
- (void)CADSourceGetConstraints:(CDStruct_f683c4ba)arg1 reply:(void (^)(int, int, int, unsigned long long))arg2;
- (void)CADDatabaseGetSources:(void (^)(int, NSArray *))arg1;
@end

