//
//  MissingPayloadStorageList.h
//  ToWF Receiver
//
//  Created by Mark Briggs on 4/3/15.
//  Copyright (c) 2015 Mark Briggs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PcmAudioDataPayload.h"

@interface PayloadStorageList : NSObject

- (id)init;
//-(void)addPayload:(PcmAudioDataPayload*)payload;
//-(void)addMissingPayload:(PcmAudioDataPayload*)payload;
//-(void)addMissingPayloads:(NSArray*)missingPayloadList;
-(void)addIncrementingMissingPayloads:(NSArray*)incrMissingPayloadsList;
-(void)addFullPayload:(PcmAudioDataPayload*)payload;

-(Boolean)hasMissingPayloadAtFirstElement;
-(Boolean)hasMissingPayloadAtFirstElementWithThisSeqId:(SeqId*)seqId;
-(Boolean)hasMissingPayloadAnywhereWithThisSeqId:(SeqId*)seqId;
-(Boolean)hasFullPayloadAtFirstElement;
-(Boolean)hasFullPayloadAtFirstElementWithThisSeqId:(SeqId*)seqId;
-(Boolean)hasFullPayloadAnywhereWithThisSeqId:(SeqId*)seqId;
-(PcmAudioDataPayload*)getFirstPayload;
-(PcmAudioDataPayload*)popFirstPayload;
-(void)removeAllPayloads;
-(Boolean)replaceMissingPayloadWithFullPayload:(PcmAudioDataPayload*)fullPayload;
-(NSString*)toString;
-(NSString*)getMissingPayloadsSeqIdsAsHexString;
-(int)getSize;
-(NSArray*)getMissingPayloads;



@end
