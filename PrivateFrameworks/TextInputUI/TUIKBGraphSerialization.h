//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMapTable, NSMutableData, NSMutableDictionary;

@interface TUIKBGraphSerialization : NSObject
{
    NSMapTable *_serializedOffsets;
    NSDictionary *_keyboardOffsets;
    NSData *_keyboardOffsetsData;
    NSData *_graphData;
    NSData *_serializedData;
    NSMutableDictionary *_minEdgeWidths;
    NSMutableDictionary *_maxEdgeWidths;
    _Bool _disableOffsets;
    NSMutableDictionary *_deserializationCache;
}

@property(retain, nonatomic) NSMutableDictionary *deserializationCache; // @synthesize deserializationCache=_deserializationCache;
- (id)keyboardPrefixForWidth:(float)arg1 andEdge:(_Bool)arg2;
- (void)addKeyboardPrefix:(id)arg1 forWidth:(float)arg2 minEdge:(_Bool)arg3;
- (id)objectForOffset:(int)arg1 length:(int *)arg2;
- (id)UIKBTreeForOffset:(int)arg1 length:(int *)arg2;
- (id)mergeActionForOffset:(int)arg1 length:(int *)arg2;
- (id)shapeForOffset:(int)arg1 length:(int *)arg2;
- (struct CGRect)CGRectForOffset:(int)arg1 length:(int *)arg2;
- (id)geometryForOffset:(int)arg1 length:(int *)arg2;
- (CDStruct_cdff19b3)UIKBValueForOffset:(int)arg1 length:(int *)arg2;
- (id)dictionaryForOffset:(int)arg1 length:(int *)arg2;
- (id)setForOffset:(int)arg1 length:(int *)arg2;
- (id)arrayForOffset:(int)arg1 length:(int *)arg2;
- (id)stringForOffset:(int)arg1 length:(int *)arg2;
- (float)floatValueForOffset:(int)arg1 length:(int *)arg2;
- (int)intValueForOffset:(int)arg1 length:(int *)arg2;
- (id)keyboardForName:(id)arg1;
@property(retain, nonatomic) NSData *serializedData;
- (void)serializeObject:(id)arg1;
- (id)_objectAtSerializedOffset:(int)arg1;
- (int)_serializedOffsetForObject:(id)arg1;
- (void)persistData:(id)arg1 forObject:(id)arg2;
- (id)dataForObject:(id)arg1;
- (id)dataForOffsetObject:(id)arg1;
- (id)dataForUIKBTree:(id)arg1;
- (id)dataForMergeAction:(id)arg1;
- (id)dataForShape:(id)arg1;
- (id)dataForCGRect:(struct CGRect)arg1;
- (id)dataForGeometry:(id)arg1;
- (id)dataForUIKBValue:(CDStruct_cdff19b3)arg1;
- (id)dataForDictionary:(id)arg1;
- (id)sanitizedDictionary:(id)arg1;
- (id)dataForSet:(id)arg1;
- (id)dataForArray:(id)arg1;
- (id)dataForString:(id)arg1;
- (id)dataForReference:(int)arg1;
- (id)dataForFloat:(float)arg1;
- (id)dataForInt:(int)arg1;
- (id)mutableDataForObjectType:(unsigned char)arg1;
@property(readonly, nonatomic) NSMutableDictionary *keyboardOffsets;
@property(readonly, nonatomic) NSMutableData *graphData;
- (void)reset;
- (void)dealloc;
- (id)init;

@end
