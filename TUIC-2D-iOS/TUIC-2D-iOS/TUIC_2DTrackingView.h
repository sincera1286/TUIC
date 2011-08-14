//
//  TUIC_2DTrackingView.h
//  TUIC-2D-iOS
//
//  Created by Daniel Tsai on 11/8/14.
//  Copyright 2011 NTU Mobile HCI Lab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TUIC_2DView.h"
#import "TUIC_2DTagPoint.h"

@interface TUIC_2DTrackingView : UIView {
    
    // Used to keep track of all current touches.
    NSMutableArray *ActiveTouches;      
    // Use timestamp to identify different object
	float lastTouchtime;
    
    // Store the TUIC_2DView objects
    NSMutableArray *TUIC2DtagArray;

}

@property (nonatomic, retain) NSMutableArray *ActiveTouches;
@property (nonatomic, retain) NSMutableArray *TUIC2DtagArray;

-(void)clearAll;


@end
