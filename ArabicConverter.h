//
//  ArabicConverter.h
//  CreationHD_Arabic
//
//  Created by Accorpa LLC on 3/20/12.
//  Copyright (c) 2012 Accorpa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ArabicConverter : NSObject


-(NSString*)convertArabic:(NSString*)normal;
-(NSString*)convertArabicBack:(NSString*)apfb;
@end
