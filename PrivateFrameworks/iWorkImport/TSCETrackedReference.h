//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCETrackedReference : NSObject <NSCopying>
{
    struct TSCEASTNodeArray *mAST;
    CDStruct_a91f2c80 mFormulaID;
}

- (id)initWithTrackedReferenceTSPObjectDeprecated:(id)arg1;
- (id)initFromArchive:(const struct TrackedReferenceArchive *)arg1;
- (void)encodeToArchive:(struct TrackedReferenceArchive *)arg1 archiver:(id)arg2;
- (id)displayStringWithCalculationEngine:(id)arg1;
- (id)description;
- (_Bool)isValidWithReferenceTracker:(id)arg1;
- (void)registerWithCalculationEngine:(id)arg1 inOwner:(struct __CFUUID *)arg2;
- (id)referenceEnumeratorWithCalculationEngine:(id)arg1 referenceTrackerID:(struct __CFUUID *)arg2;
- (struct TSCEASTNodeArray *)ast;
- (void)setFormulaID:(CDStruct_a91f2c80)arg1;
- (CDStruct_a91f2c80)formulaID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)replaceContentsWithContentsOfTrackedReference:(id)arg1;
- (id)initByCopyingASTNodeArray:(struct TSCEASTNodeArray *)arg1 formulaID:(CDStruct_a91f2c80)arg2;
- (id)initWithCReference:(struct TSCECReference)arg1 formulaID:(CDStruct_a91f2c80)arg2;
- (void)dealloc;

@end

